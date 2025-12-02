import torch
import torch.nn as nn
import torch.optim as optim
import torch.nn.functional as F
import torch.backends.cudnn as cudnn
import argparse
import math
from model_trainer import *
from models import *
from config import *
from orchid_optim import *


import torchvision
import torchvision.transforms as transforms
import torch.nn.utils.prune as prune

# model_name = "VGG16_quant_4bit_pruned_sgd"
model_name = "VGG16_quant_4bit_pruned_orchid"
model = VGG16_quant()
#print(model)
criterion = nn.CrossEntropyLoss()

print("Preparing Test Data..")
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


if "orchid" in model_name:
    ## Orchid optimizer
    optimizer = Orchid(model.parameters(), lr=LR_4bit_o, momentum=MOMENTUM,weight_decay=WEIGHT_DECAY)
else:
    ## SGD optimizer
    optimizer = torch.optim.SGD(model.parameters(), lr=LR_4bit, momentum=0.93,weight_decay=WEIGHT_DECAY)

## Combined LR Scheduler (Warmup followed by Cosine Annealing)
steps = EPOCHS_P * (len(iter(trainloader)))
warmup_steps = WARMUP_STEPS_P * (len(iter(trainloader)))
warmup = torch.optim.lr_scheduler.LinearLR(optimizer=optimizer,
                                            start_factor=1/3,
                                            total_iters=warmup_steps)
decay = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer=optimizer,
                                                    T_max=steps-warmup_steps)
scheduler = torch.optim.lr_scheduler.SequentialLR(optimizer=optimizer,
                                                  schedulers=[warmup,decay],
                                                  milestones=[warmup_steps])


trainer = Trainer(model_name,model,criterion,optimizer,scheduler,trainloader,testloader)
trainer.model.load_state_dict(trainer.load_chkpoint("./results/VGG16_quant_4bit_base/chkpoints_prime_92.31.pth")['state_dict'])
#trainer.model.load_state_dict(trainer.load_chkpoint("./results/VGG16_quant_2bit_base/chkpoints_good_87.79.pth")['state_dict'])
#
print("Validating before we begin")
trainer.validate(save_weights=False)

## Hooking layers
saves_preprune = trainer.hook_layer()
dataiter = iter(testloader)
images, labels = next(dataiter)
img = images[0].reshape(1,images.shape[1],images.shape[2],images.shape[3]).to(trainer.device)
out = trainer.model(img)
print("Same Sanity checks...")
print(saves_preprune.outputs[0][0].shape,saves_preprune.outputs[1][0].shape, trainer.model.features[30].weight_q.shape)

## Printing Sparsity levels before pruning
print("Sparsity levels before pruning")
for i in [7,10,14,17,20,24,27]:
    weight = trainer.model.features[i].weight
    w_alpha = trainer.model.features[i].weight_quant.wgt_alpha
    w_bit = 4
    # w_bit = 2
    weight_q_fn = model.features[i].weight_quant
    weight_q = weight_q_fn(weight)
    weight_int = weight_q / (w_alpha / (2**(w_bit-1)-1))
    sparsity_weight_int = (weight_int == 0).sum() / weight_int.nelement()
    print("Sparsity level: ", sparsity_weight_int)

## Pruning (Unstructured)
prune.l1_unstructured(trainer.model.features[7], name="weight", amount=PRUNE_PERC)
prune.l1_unstructured(trainer.model.features[14], name="weight", amount=PRUNE_PERC)
prune.l1_unstructured(trainer.model.features[27], name="weight", amount=PRUNE_PERC)
## Pruning (Structured)
prune.ln_structured(trainer.model.features[10], name="weight", amount=PRUNE_PERC,dim=0, n=2)
prune.ln_structured(trainer.model.features[17], name="weight", amount=PRUNE_PERC,dim=0, n=2)
prune.ln_structured(trainer.model.features[20], name="weight", amount=PRUNE_PERC,dim=0, n=2)
prune.ln_structured(trainer.model.features[24], name="weight", amount=PRUNE_PERC,dim=0, n=2)

##Printing Sparsirty levels after pruning and before furthe training
print("Sparsity levels after pruning")
for i in [7,10,14,17,20,24,27]:
    mask1 = trainer.model.features[i].weight_mask
    sparsity_mask1 = (mask1 == 0).sum() / mask1.nelement()
    print("Sparsity level: ", sparsity_mask1)

os.makedirs(f"./results/{model_name}_{PRUNE_PERC}",exist_ok=True)
trainer.train(EPOCHS_P)
trainer.validate(save_weights=True)

print("Sparsity levels before pruning")
for i in [7,10,14,17,20,24,27]:
    weight = trainer.model.features[i].weight
    w_alpha = trainer.model.features[i].weight_quant.wgt_alpha
    w_bit = 4
    weight_q_fn = model.features[i].weight_quant
    weight_q = weight_q_fn(weight)
    weight_int = weight_q / (w_alpha / (2**(w_bit-1)-1))
    sparsity_weight_int = (weight_int == 0).sum() / weight_int.nelement()
    print("Sparsity level: ", sparsity_weight_int)


