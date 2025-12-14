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


model_name = "VGG16_quant_2bit_pruned_orchid"
model = VGG16_quant()
criterion =  nn.CrossEntropyLoss()

trainer = Trainer(model_name,model,criterion,None,None,None,None)
trainer.model.load_state_dict(trainer.load_chkpoint("./results/VGG16_rotaq_4bit/chkpoints_good_89.3.pth")['state_dict'])

print("Sparsity levels")
sparsity = []
for i in [7,10,14,17,20,24,27]:
    weight = trainer.model.features[i].weight
    w_alpha = trainer.model.features[i].weight_quant.wgt_alpha
    w_bit = 4
    weight_q_fn = model.features[i].weight_quant
    weight_q = weight_q_fn(weight)
    weight_int = weight_q / (w_alpha / (2**(w_bit-1)-1))
    sparsity_weight_int = (weight_int == 0).sum() / weight_int.nelement()
    sparsity.append(sparsity_weight_int.item())
    print("Sparsity level: ", sparsity_weight_int)
print("Average Layer Sparsity: ", sum(sparsity)/len(sparsity))