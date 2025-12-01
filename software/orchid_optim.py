import torch
import torch.nn as nn
import torch.optim as optim
import torch.nn.functional as F
import torch.backends.cudnn as cudnn
## Customized impelementation of some variant of Muon Optimizer

## From Keller Jordan's Github (credits to him)
def NewtonSchulz5(M,steps=5):
    eps = 1e-7
    a,b,c = (3.4445, -4.7750, 2.0315)
    X = M.bfloat16()
    if M.size(-2) > M.size(-1):
        X = X.mT
    for _ in range(steps):
        A = X @ X.mT
        B = b * A + c * A @ A
        X = a * X + B @ X
    if M.size(-2) > M.size(-1):
        X = X.mT
    return X

## C
class Orchid(torch.optim.Optimizer):

    def __init__(self,params, lr, momentum=0.9,weight_decay=0):
        super(Orchid,self).__init__(params, defaults={'lr': lr})
        self.momentum = momentum
        self.weight_decay = weight_decay
        self.state = dict()
        for group in self.param_groups:
            for p in group['params']:
                self.state[p] = dict(mom=torch.zeros_like(p.data))
    @torch.no_grad()
    def step(self):
        for group in self.param_groups:
            for p in group['params']:
                if p.grad is None:
                    continue
                if p not in self.state:
                    self.state[p] = dict(mom=torch.zeros_like(p.data))
                mom = self.state[p]['mom'].cuda()
                #print(self.state[p])
                if self.weight_decay != 0:
                    mom = self.momentum * mom + self.weight_decay*p.grad.data
                else:
                    mom = self.momentum * mom + p.grad.data
                if mom.ndim >= 2:
                    p.data -= group['lr'] * NewtonSchulz5(mom.cuda())
                else:
                    p.data -= group['lr'] * mom
        
        