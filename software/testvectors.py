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


import torchvision
import torchvision.transforms as transforms

model_name = "VGG16_quant_4bit_base"
model = VGG16_quant()
#print(model)
criterion = nn.CrossEntropyLoss()

print("Preparing Test Data..")
normalize = transforms.Normalize(mean=[0.491, 0.482, 0.447], std=[0.247, 0.243, 0.262])

test_dataset = torchvision.datasets.CIFAR10(
    root='./data',
    train=False,
    download=True,
    transform=transforms.Compose([
        transforms.ToTensor(),
        normalize,
    ]))

testloader = torch.utils.data.DataLoader(test_dataset, batch_size=BATCH_SIZE, shuffle=False, num_workers=2)

trainer = Trainer(model_name,model,criterion,None,None,None,testloader)
trainer.model.load_state_dict(trainer.load_chkpoint("./results/VGG16_quant_4bit_base/chkpoints_prime_92.31.pth")['state_dict'])
print("Validating before we begin")
trainer.validate(save_weights=False)

## Hooking layers
saves = trainer.hook_layer()
dataiter = iter(testloader)
images, labels = next(dataiter)
img = images[0].reshape(1,images.shape[1],images.shape[2],images.shape[3]).to(trainer.device)
out = trainer.model(img)
print("Same Sanity checks...")
print(saves.outputs[0][0].shape,saves.outputs[1][0].shape, trainer.model.features[30].weight_q.shape)

## Quantizing the input
act = saves.outputs[0][0]
act_alpha  = model.features[30].act_alpha
act_bit = 4
act_quant_fn = act_quantization(act_bit)
act_q = act_quant_fn(act, act_alpha)
act_int = act_q / (act_alpha / (2**act_bit-1))

## Quantizing the weights
weight_q = model.features[30].weight_q
w_alpha = model.features[30].weight_quant.wgt_alpha
w_bit = 4
weight_int = weight_q / (w_alpha / (2**(w_bit-1)-1))

conv_qint = torch.nn.Conv2d(in_channels=8, out_channels=8, kernel_size = 3, padding=1)
conv_qint.weight = torch.nn.parameter.Parameter(weight_int)
conv_qint.bias = model.features[30].bias
output_int = conv_qint(act_int)
output_recovered = output_int * (act_alpha / (2**act_bit-1)) * (w_alpha / (2**(w_bit-1)-1))

conv_ref = torch.nn.Conv2d(in_channels = 8, out_channels=8, kernel_size = 3, padding=1)
conv_ref.weight = model.features[30].weight_q
conv_ref.bias = model.features[30].bias
output_ref = conv_ref(act)
print(abs(output_recovered-output_ref).mean())

w_int = torch.reshape(weight_int, (weight_int.size(0), weight_int.size(1), -1))  # merge ki, kj index to kij
# w_int.weight.size() = torch.Size([8, 8, 9])
                      
padding = 1
stride = 1
array_size = 8 # row and column number

nig = range(act_int.size(2))  ## ni group [0,1,2,3]
njg = range(act_int.size(3))  ## nj group
 
icg = range(int(w_int.size(1)))  ## input channel [0,...8]
ocg = range(int(w_int.size(0)))  ## output channel


kijg = range(w_int.size(2)) # [0, .. 8]
ki_dim = int(math.sqrt(w_int.size(2)))  ## Kernel's 1 dim size

######## Padding before Convolution #######
a_pad = torch.zeros(len(icg), len(nig)+padding*2, len(njg)+padding*2).cuda()
# a_pad.size() = [8, 4+2pad, 4+2pad]
a_pad[ :, padding:padding+len(nig), padding:padding+len(njg)] = act_int.cuda()
a_pad = torch.reshape(a_pad, (a_pad.size(0), -1))  ## mergin ni and nj index into nij
# print(a_pad.shape)
p_nijg = range(a_pad.size(1)) ## paded activation's nij group [0, ...34*34-1]

psum = torch.zeros( array_size, len(p_nijg), len(kijg)).cuda() 
for kij in kijg:       
    for nij in p_nijg:     # time domain, sequentially given input
        m = nn.Linear(array_size, array_size, bias=False)
        m.weight = torch.nn.Parameter(w_int[:,:,kij])
        psum[:, nij, kij] = m(a_pad[:,nij]).cuda()

a_pad_ni_dim = int(math.sqrt(a_pad.size(1))) # 32 + 2*pad = 34

o_ni_dim = int((a_pad_ni_dim - (ki_dim- 1) - 1)/stride + 1) #34 - 2 - 1 + 1 = 32
o_nijg = range(o_ni_dim**2) # [0, 32*32-1]    
    
out = torch.zeros(len(ocg), len(o_nijg)).cuda()
  
   
### SFP accumulation ###
for o_nij in o_nijg: 
    for kij in kijg:  #[0, ... 8]
        out[:,o_nij] = out[:,o_nij] + \
        psum[:, int(o_nij/o_ni_dim)*a_pad_ni_dim + o_nij%o_ni_dim + int(kij/ki_dim)*a_pad_ni_dim + kij%ki_dim, kij]

out_2D = torch.reshape(out, (out.size(0), o_ni_dim, -1)) # nij -> ni & nj
# difference = (out_2D - output_int[0,:,:,:])
# print(difference.abs().sum())
#print(psum.shape)

'''
nij = 0 # just a random number
print(a_pad.shape)
X = a_pad[:,nij:nij+36]  # [array row num, time_steps]

bit_precision = 4
file = open(f"{model_name}_{nij}_activation.txt", 'w') #write to file
file.write('#time0row7[msb-lsb],time0row6[msb-lst],....,time0row0[msb-lst]#\n')
file.write('#time1row7[msb-lsb],time1row6[msb-lst],....,time1row0[msb-lst]#\n')
file.write('#................#\n')

for i in range(X.size(1)):  # time step
    for j in range(X.size(0)): # row #
        X_bin = '{0:04b}'.format(round(X[7-j,i].item()))
        for k in range(bit_precision):
            file.write(X_bin[k])        
        #file.write(' ')  # for visibility with blank between words, you can use
    file.write('\n')
file.close() #close file    

#kij = 0
bit_precision = 4

for kij in kijg:
    W = w_int[:,:,kij]  # w_tile[tile_num, array col num, array row num, kij]

    file = open(f"{model_name}_{kij}_weight.txt", 'w') #write to file
    file.write('#col0row7[msb-lsb],col0row6[msb-lst],....,col0row0[msb-lst]#\n')
    file.write('#col1row7[msb-lsb],col1row6[msb-lst],....,col1row0[msb-lst]#\n')
    file.write('#................#\n')

    for i in range(W.size(0)):  # column #
        for j in range(W.size(1)): # row #
            if W[i,7-j].item() >= 0:
                W_bin = '{0:04b}'.format(round(W[i,7-j].item()))
            else:
                W_bin = '{0:04b}'.format(round(W[i,7-j].item()+16))
            for k in range(bit_precision):
                file.write(W_bin[k])        
            #file.write(' ')  # for visibility with blank between words, you can use
        file.write('\n')
    file.close() #close file 

# ic_tile_id = 0 
# oc_tile_id = 0 


# kij = 0
nij = 0
bit_precision = 16
for kij in kijg:
    Ps = psum[:,nij:nij+36,kij]  
    # psum[len(ic_tileg), len(oc_tileg), array_size, len(p_nijg), len(kijg)]
    
    file = open(f"{model_name}_{nij}_{kij}_psum.txt", 'w') #write to file
    file.write('#time0col7[msb-lsb],time0col6[msb-lst],....,time0col0[msb-lst]#\n')
    file.write('#time1col7[msb-lsb],time1col6[msb-lst],....,time1col0[msb-lst]#\n')
    file.write('#................#\n')
    for i in range(Ps.size(1)):  # time step
        for j in range(Ps.size(0)): # row #
            if Ps[7-j,i] >= 0:
                PS_bin = '{0:016b}'.format(round(Ps[7-j,i].item()))
            else:
                PS_bin = '{0:016b}'.format(round(Ps[7-j,i].item()+65536))
            for k in range(bit_precision):
                file.write(PS_bin[k])        
            #file.write(' ')  # for visibility with blank between words, you can use
        file.write('\n')
    file.close() #close file
'''
print(a_pad.shape, out.shape)
nij = 0 # just a random number
print(a_pad.shape)
O = out[:,nij:nij+16]  # [array row num, time_steps]

bit_precision = 16
file = open(f"{model_name}_{nij}_output_norelu.txt", 'w') #write to file
file.write('#time0row7[msb-lsb],time0row6[msb-lst],....,time0row0[msb-lst]#\n')
file.write('#time1row7[msb-lsb],time1row6[msb-lst],....,time1row0[msb-lst]#\n')
file.write('#................#\n')

for i in range(O.size(1)):  # time step
    for j in range(O.size(0)): # row #
        if O[7-j,i] >= 0:
            O_bin = '{0:016b}'.format(round(O[7-j,i].item()))
        else:
            O_bin = '{0:016b}'.format(round(O[7-j,i].item()+65536))
        for k in range(bit_precision):
            file.write(O_bin[k])        
        #file.write(' ')  # for visibility with blank between words, you can use
    file.write('\n')
file.close() #close file   

print(out)


out_relu = F.relu(out)
print(out_relu)
nij = 0 # just a random number
O = out_relu[:,nij:nij+16]  # [array row num, time_steps]

bit_precision = 16
file = open(f"{model_name}_{nij}_output_relu.txt", 'w') #write to file
file.write('#time0row7[msb-lsb],time0row6[msb-lst],....,time0row0[msb-lst]#\n')
file.write('#time1row7[msb-lsb],time1row6[msb-lst],....,time1row0[msb-lst]#\n')
file.write('#................#\n')

for i in range(O.size(1)):  # time step
    for j in range(O.size(0)): # row #
        if O[7-j,i] >= 0:
            O_bin = '{0:016b}'.format(round(O[7-j,i].item()))
        else:
            O_bin = '{0:016b}'.format(round(O[7-j,i].item()+65536))
        for k in range(bit_precision):
            file.write(O_bin[k])        
        #file.write(' ')  # for visibility with blank between words, you can use
    file.write('\n')
file.close() #close file  

## Write the variables to 4 files for reading..(input, weights, pre-relu output, output)

## Create a scratch input and a conv layer and provide its output (also write to files)


