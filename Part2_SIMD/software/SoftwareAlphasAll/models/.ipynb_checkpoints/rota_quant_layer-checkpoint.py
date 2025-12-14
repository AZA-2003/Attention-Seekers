import torch.nn as nn
import torch
import torch.nn.functional as F
from torch.nn.parameter import Parameter
import random
import numpy as np



def weight_quantization(b):

    def uniform_quant(x, b):
        xdiv = x.mul((2 ** b - 1))
        xhard = xdiv.round().div(2 ** b - 1)  
        #print('uniform quant bit: ', b)
        return xhard
    def learned_step_quant(x,b):
        xhard = (x.clamp(min=-2**b, max=2**(b)-1)).floor()
        return xhard
        
        
    class _pq(torch.autograd.Function):
        @staticmethod
        def forward(ctx, input, alpha):
            input.div_(alpha)                          # weights are first divided by alpha
            input_c = input.clamp(min=-1, max=1)       # then clipped to [-1,1]
            sign = input_c.sign()
            input_abs = input_c.abs()
            input_q = uniform_quant(input_abs, b).mul(sign)
            ctx.save_for_backward(input, input_q)
            input_q = input_q.mul(alpha)               # rescale to the original range
            return input_q
            # eps = 1e-6 # avoid zero division
            # input_div = input.div(alpha+eps)
            # input_q = learned_step_quant(input_div,b)
            # input_q = input_q.mul(alpha)          # rescale to the original range
            # ctx.save_for_backward(input, input_div, input_q, alpha)
            # return input_q

        @staticmethod
        def backward(ctx, grad_output):
            grad_input = grad_output.clone()   # grad for weights will not be clipped
            input, input_q = ctx.saved_tensors
            i = (input.abs()>1.).float()     
            # >1 means clipped. # output matrix is a form of [True, False, True, ...]
            sign = input.sign()              
            # output matrix is a form of [+1, -1, -1, +1, ...]
            #grad_alpha = (grad_output*(sign*i + (input_q-input)*(1-i))).sum()
            grad_alpha = (grad_output*(sign*i + (0.0)*(1-i))).sum()
            # above line, if i = True,  and sign = +1, "grad_alpha = grad_output * 1"
            #             if i = False, "grad_alpha = grad_output * (input_q-input)"
            grad_input = grad_input*(1-i)
            return grad_input, grad_alpha
            # input, input_div, input_q, alpha = ctx.saved_tensors
            # i = ((input_div < -2**(b)) | (input_div > 2**(b)-1)).float()
            # sign = input_div.sign()    
            # grad_input = ((grad_input*(1-i)))
            # grad_alpha = (grad_output*(i*learned_step_quant(input.div(alpha),b)+(1-i)*(learned_step_quant(input.div(alpha),b)-input.div(alpha)))).sum() * (1/np.sqrt((2**(b)-1)*input_div.numel()))
            # return grad_input, grad_alpha

    return _pq().apply


class weight_quantize_fn(nn.Module):
    def __init__(self, w_bit):
        super(weight_quantize_fn, self).__init__()
        self.w_bit = w_bit-1
        self.weight_q = weight_quantization(b=self.w_bit)
        #self.register_parameter('wgt_alpha', Parameter(torch.tensor(8.0)))
        self.register_parameter('wgt_alpha', Parameter(torch.tensor(1.0)))

    def forward(self, weight):
        mean = weight.data.mean()
        std = weight.data.std()
        weight = weight.add(-mean).div(std)      # weights normalization
        weight_q = self.weight_q(weight, self.wgt_alpha)
        
        return weight_q


def act_quantization(b):

    def uniform_quant(x, b=4):
        xdiv = x.mul(2 ** b - 1)
        xhard = xdiv.round().div(2 ** b - 1)
        return xhard
    def learned_step_quant(x,b):
        xhard = (x.clamp(min=0, max=2**b-1)).round()
        return xhard

    class _uq(torch.autograd.Function):
        @staticmethod
        def forward(ctx, input, alpha):
            eps = 1e-6 # avoid zero division
            # print(alpha)
            n = input.shape[2]
            # print(input)
            hadamard2 = torch.tensor([[1.0,1.0],[1.0,-1.0]]) * (1/np.sqrt(2))
            hadamard4 = torch.tensor([[1.0,1.0,1.0,1.0],[1.0,-1.0,1.0,-1.0],[1.0,1.0,-1.0,-1.0],[1.0,-1.0,-1.0,1.0]]) * (1/2)
            if n > 4:
                hadamard_4l = [hadamard4]*(n//4)
                hadamard = torch.block_diag(*hadamard_4l).cuda()
            else:
                hadamard_2l = [hadamard2]*(n//2)
                hadamard = torch.block_diag(*hadamard_2l).cuda()
            input_had = input @ hadamard
            input_had.div_(alpha)                          # weights are first divided by alpha
            input_c = input_had.clamp(min=-1, max=1)       # then clipped to [-1,1]
            sign = input_c.sign()
            input_abs = input_c.abs()
            input_q = uniform_quant(input_abs, b).mul(sign)
            ctx.save_for_backward(input,input_had, input_q, hadamard)
            input_q = input_q.mul(alpha)               # rescale to the original range
            input_q = input_q @ hadamard.mT
            return input_q

        @staticmethod
        def backward(ctx, grad_output):
            grad_input = grad_output.clone()  # grad for weights will not be clipped
            input,input_had, input_q, hadamard = ctx.saved_tensors
            i = (input.abs()>1.).float()     
            # >1 means clipped. # output matrix is a form of [True, False, True, ...]
            sign = input.sign()              
            # output matrix is a form of [+1, -1, -1, +1, ...]
            #grad_alpha = (grad_output*(sign*i + (input_q-input)*(1-i))).sum()
            grad_alpha = ((grad_output @ hadamard.mT)*(sign*i + (0.0)*(1-i))).sum()
            # above line, if i = True,  and sign = +1, "grad_alpha = grad_output * 1"
            #             if i = False, "grad_alpha = grad_output * (input_q-input)"
            grad_input = ((grad_input@ hadamard.mT)*(1-i)) @ hadamard
            return grad_input, grad_alpha
            # input, input_div, input_q, hadamard, alpha = ctx.saved_tensors
            # i = ((input_div < 0) | (input_div > 2**(b)-1)).float()
            # sign = input_div.sign()    
            # grad_input = (1-i) *(grad_input @ (hadamard.T))
            # # grad_alpha = (grad_output*i*learned_step_quant(input.div(alpha),b)).sum() * (1/np.sqrt((2**(b)-1)*input_div.numel()))
            # grad_alpha = (grad_output*(i*input_q)+(1-i)*(input_q-input.div(alpha))).sum() * (1/np.sqrt((2**b-1)*input_div.numel()))
            # # print(input_div)
            # # exit()
            # return grad_input, grad_alpha

    return _uq().apply


class RotaQuantConv2d(nn.Conv2d):
    def __init__(self, in_channels, out_channels, kernel_size, stride=1, padding=0, dilation=1, groups=1, bias=False):
        super(RotaQuantConv2d, self).__init__(in_channels, out_channels, kernel_size, stride, padding, dilation, groups,
                                          bias)
        self.layer_type = 'RotaQuantConv2d'
        self.w_bit = 4
        self.a_bit = 4
        self.weight_quant = weight_quantize_fn(w_bit=self.w_bit)
        self.act_alq = act_quantization(self.a_bit)
        # self.act_alpha = torch.nn.Parameter(torch.tensor(0.5))
        self.act_alpha = torch.nn.Parameter(torch.tensor(1.0))
        self.weight_q  = torch.nn.Parameter(torch.zeros([out_channels, in_channels, kernel_size, kernel_size]))
        
    def forward(self, x):
        weight_q = self.weight_quant(self.weight)       
        #self.register_parameter('weight_q', Parameter(weight_q))  # Mingu added
        self.weight_q = torch.nn.Parameter(weight_q)  # Store weight_q during the training
        x = self.act_alq(x, self.act_alpha)
        return F.conv2d(x, weight_q, self.bias, self.stride, self.padding, self.dilation, self.groups)
    
    def show_params(self):
        wgt_alpha = round(self.weight_quant.wgt_alpha.data.item(), 3)
        act_alpha = round(self.act_alpha.data.item(), 3)
        print('clipping threshold weight alpha: {:2f}, activation alpha: {:2f}'.format(wgt_alpha, act_alpha))

