import os
import time
import torch
import torch.nn as nn
import torch.optim as optim
import torch.nn.functional as F
import torch.backends.cudnn as cudnn

import torchvision
import torchvision.transforms as transforms
from model_trainer import *
from models import *
from config import *


print("Setting up Model..")
model_name = "VGG16_quant_V1"
model = VGG16_quant()
criterion =  nn.CrossEntropyLoss()

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
trainloader = torch.utils.data.DataLoader(train_dataset, batch_size=BATCH_SIZE, shuffle=True, num_workers=2)

test_dataset = torchvision.datasets.CIFAR10(
    root='./data',
    train=False,
    download=True,
    transform=transforms.Compose([
        transforms.ToTensor(),
        normalize,
    ]))

testloader = torch.utils.data.DataLoader(test_dataset, batch_size=BATCH_SIZE, shuffle=False, num_workers=2)
os.makedirs("./results",exist_ok=True)
os.makedirs(f"./results/{model_name}",exist_ok=True)

print("Setting up optimizers..")
## Adam optimizer
# optimizer = torch.optim.Adam(model.parameters(), lr=LR)
## SGD optimizer
optimizer = torch.optim.SGD(model.parameters(), lr=LR, momentum=0.95)

## Combined LR Scheduler (Warmup followed by Cosine Annealing)
steps = EPOCHS * (sum([len(t) for t in trainloader]))
warmup_steps = WARMUP_STEPS * (sum([len(t) for t in trainloader]))
#steps = EPOCHS
# scheduler = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer=optimizer,
#                                                     T_max=steps)
# scheduler = torch.optim.lr_scheduler.StepLR(optimizer=optimizer,
#                                         step_size=(steps), gamma=0.1)
# warmup_steps = WARMUP_STEPS
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
#gamma=0.1
#print(type(criterion),type(optimizer),type(scheduler),type(trainloader),type(testloader))

trainer = Trainer(model_name,model,criterion,optimizer,scheduler,trainloader,testloader)
print("Training...")
trainer.train(EPOCHS)
saves = trainer.hook_layer()

dataiter = iter(testloader)
images, labels = next(dataiter)
images = images.to(trainer.device)
out = trainer.model(images)

print(saves)