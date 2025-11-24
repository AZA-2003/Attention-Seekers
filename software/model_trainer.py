import argparse
import os
import time
from tqdm import tqdm
import shutil
import torch


from models import *
from config import *

class AverageMeter(object):
    """Computes and stores the average and current value"""
    def __init__(self):
        self.reset()

    def reset(self):
        self.val = 0
        self.avg = 0
        self.sum = 0
        self.count = 0

    def update(self, val, n=1):
        self.val = val
        self.sum += val * n
        self.count += n
        self.avg = self.sum / self.count

def accuracy(output, target, topk=(1,)):
    """Computes the precision@k for the specified values of k"""
    maxk = max(topk)
    batch_size = target.size(0)

    _, pred = output.topk(maxk, 1, True, True)
    pred = pred.t()
    correct = pred.eq(target.view(1, -1).expand_as(pred))

    res = []
    for k in topk:
        correct_k = correct[:k].view(-1).float().sum(0)
        res.append(correct_k.mul_(100.0 / batch_size))
    return res

class Trainer():
    '''Class Instantiation of Trainer module for training and validation'''
    def __init__(self,
                 name: str,
                 model,
                 criterion: torch.nn.modules.loss,
                 optimizer: torch.optim,
                 scheduler: torch.optim.lr_scheduler,
                 train_dloader: torch.utils.data.dataloader.DataLoader,
                 test_dloader: torch.utils.data.dataloader.DataLoader):
        self.name = name
        self.device = torch.device("cuda") if torch.cuda.is_available() else torch.device("cpu")
        print(f"Running on {self.device}")
        self.model = model.to(self.device)
        self.criterion = criterion.to(self.device)
        self.optimizer = optimizer
        self.scheduler = scheduler
        self.train_loader = train_dloader
        self.test_loader = test_dloader
        
        self.scribe = {"Name": self.name,
                       "Date Trained": time.ctime(time.time()),
                       "Best prec": 0}
    
    def train(self,epochs,print_freq=100):
        self.model.train()
        for epoch in tqdm(range(epochs)):
            losses = AverageMeter()
            top1 = AverageMeter()
            #progress_bar = tqdm(self.train_loader, desc="Training batch", leave=False, colour="yellow")
            for i, (inputs,targets) in enumerate(self.train_loader):
                inputs, targets = inputs.to(self.device), targets.to(self.device)
                outputs = self.model(inputs)
                #print(inputs.shape, outputs.shape,targets.shape)
                loss = self.criterion(outputs,targets)
                
                prec = accuracy(outputs, targets)[0]
                losses.update(loss.item(), inputs.size(0))
                top1.update(prec.item(), inputs.size(0))
                
                self.optimizer.zero_grad()
                loss.backward()
                self.optimizer.step()
                self.scheduler.step()
                if i % print_freq == 0:
                    print('Epoch: [{0}][{1}/{2}]\t' 'LR: {lr:.5f}\t'
                        'Loss {loss.val:.4f} ({loss.avg:.4f})\t'
                        'Prec {top1.val:.3f}% ({top1.avg:.3f}%)'.format(
                        epoch, i, len(self.train_loader), loss=losses, top1=top1, lr=self.scheduler.get_last_lr()[0]))
            prec = self.validate(save_weights=True)
            self.scribe["Best prec"] = max(self.scribe["Best prec"],prec)
            print(f"Best accuracy: {self.scribe["Best prec"]}")        
            self.model.train()
            #self.scheduler.step()
        self.log_progress()

        
    def validate(self,save_weights,print_freq=20):
        self.model.eval()
        print("Validating..")
        losses_val = AverageMeter()
        top1_val = AverageMeter()
        with torch.no_grad():
            #progress_bar = tqdm(self.test_loader, desc="Testing batch", leave=False, colour="green")
            for i, (inputs,targets) in enumerate(self.test_loader):
                inputs, targets = inputs.to(self.device), targets.to(self.device)
                outputs = self.model(inputs)
                loss = self.criterion(outputs,targets)
                
                prec = accuracy(outputs, targets)[0]
                losses_val.update(loss.item(), inputs.size(0))
                top1_val.update(prec.item(), inputs.size(0))
                if i % print_freq == 0:
                    print('Test: [{0}/{1}]\t'
                        'Loss {loss.val:.4f} ({loss.avg:.4f})\t'
                        'Prec {top1.val:.3f}% ({top1.avg:.3f}%)'.format(
                        i, len(self.test_loader), loss=losses_val, top1=top1_val))
        
        best_prec = top1_val.avg
        print(' * Prec {top1:.3f}% '.format(top1=best_prec))
        if save_weights and prec > self.scribe["Best prec"]:
            if best_prec >= 90:
                self.save_chkpoint({"name": self.name,
                            "state_dict": self.model.state_dict(),
                            "optimizer": self.optimizer.state_dict()},
                            f"./chkpoints/{self.name}/chkpoints_prime_{best_prec}.pth")
            elif best_prec >= 85:
                self.save_chkpoint({"name": self.name,
                                    "state_dict": self.model.state_dict(),
                                    "optimizer": self.optimizer.state_dict()},
                                    f"./chkpoints/{self.name}/chkpoints_good_{best_prec}.pth")
            else:
                self.save_chkpoint({"name": self.name,
                    "state_dict": self.model.state_dict(),
                    "optimizer": self.optimizer.state_dict()},
                    f"./chkpoints/{self.name}/chkpoints_{best_prec}.pth")
                
    
        return best_prec
                
    def save_chkpoint(state,fdir):
        '''Saves checkpoints to designated checkpoint path'''
        torch.save(state,fdir)
        
    def log_progress(self):
        with open(SCRIBE,"w") as f:
            f.write(f"{self.scribe["Name"]}\t{self.scribe["Date Trained"]}\t{self.scribe["Best prec"]}")
    
    def load_chkpoint(self,fdir):
        '''loads checkpoints given a checkpoint path'''
        checkpoint = torch.load(fdir)
        return checkpoint
        # self.model.load_state_dict(checkpoint['state_dict'])
    
    def hook_layer(self):
        class SaveOutput:
            def __init__(self):
                self.outputs = []
            def __call__(self, module, module_in):
                self.outputs.append(module_in)
            def clear(self):
                self.outputs = []  
        save = SaveOutput()
        self.model.featues[26].register_forward_pre_hook(save)
        self.model.featues[26].register_forward_hook(save)
        return save
        