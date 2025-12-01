import os
import time
import torch
import torch.nn as nn
import torch.optim as optim
import torch.nn.functional as F
import torch.backends.cudnn as cudnn

import torchvision
import torchvision.transforms as transforms
from rq_model_trainer import *
from models import *
from config import *
from orchid_optim import *


print("Training 4-bit Baseline w/ Rotatory Quantization")
print("Setting up Model..")
## Original 4-bit model
# model_name = "VGG16_quant_4bit_base"
# model = VGG16_quant()
## 4-bit modle base for 2-bit training
model_name = "VGG16_rotaq_4bit"
model = VGG16_rotaqv2()
#print(model)
criterion =  nn.CrossEntropyLoss()
#+sum([torch.linalg.matrix_norm(l.weight_quant.wgt_O)] for l in model.features if isinstance(l,RotaQuantConv2d))

print("Preparing Data..")
normalize = transforms.Normalize(mean=[0.491, 0.482, 0.447], std=[0.247, 0.243, 0.262])

train_dataset = torchvision.datasets.CIFAR10(
    root='./data',
    train=True,
    download=True,
    transform=transforms.Compose([
        transforms.RandomCrop(32, padding=4),
        transforms.RandomHorizontalFlip(),
        transforms.ToTensor(),
        normalize,
    ]))
trainloader = torch.utils.data.DataLoader(train_dataset, batch_size=BATCH_SIZE_r, shuffle=True, num_workers=2)

test_dataset = torchvision.datasets.CIFAR10(
    root='./data',
    train=False,
    download=True,
    transform=transforms.Compose([
        transforms.ToTensor(),
        normalize,
    ]))

testloader = torch.utils.data.DataLoader(test_dataset, batch_size=BATCH_SIZE_r, shuffle=False, num_workers=2)
os.makedirs("./results",exist_ok=True)
os.makedirs(f"./results/{model_name}_{PRUNE_PERC}",exist_ok=True)

print("Setting up optimizers..")
## Orchid optimizer
optimizer = Orchid(model.parameters(), lr=LR_4bit_r, momentum=MOMENTUM_r,weight_decay=WEIGHT_DECAY_r)
## Adam optimizer (NOT VERY GOOD!)
#optimizer = torch.optim.AdamW(model.parameters(), lr=LR_4bit_r, weight_decay=WEIGHT_DECAY_r, betas=BETAS_r)
## SGD optimizer
# optimizer = torch.optim.SGD(model.parameters(), lr=LR_4bit_r, momentum=MOMENTUM_r ,weight_decay=WEIGHT_DECAY_r)

## Combined LR Scheduler (Warmup followed by Cosine Annealing)
steps = EPOCHS_r * (len(iter(trainloader)))
warmup_steps = WARMUP_STEPS_r * (len(iter(trainloader)))
# scheduler = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer=optimizer,
#                                                     T_max=steps)
# scheduler = torch.optim.lr_scheduler.StepLR(optimizer=optimizer,
#                                         step_size=(steps), gamma=0.1)
warmup = torch.optim.lr_scheduler.LinearLR(optimizer=optimizer,
                                            start_factor=1/3,
                                            total_iters=warmup_steps)
decay = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer=optimizer,
                                                    T_max=steps-warmup_steps)
# # decay = torch.optim.lr_scheduler.StepLR(optimizer=optimizer,
# #                                         step_size=(steps-warmup_steps))
scheduler = torch.optim.lr_scheduler.SequentialLR(optimizer=optimizer,
                                                  schedulers=[warmup,decay],
                                                  milestones=[warmup_steps])
print("Setting up Trainer..")
trainer = Trainer(model_name,model,criterion,optimizer,scheduler,trainloader,testloader)
print("Training...")
trainer.train(EPOCHS_r)
trainer.validate(save_weights=True)