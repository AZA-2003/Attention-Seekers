# Software Docs
This directory handles model training and quantization
## Folder Info

Info about the files and directories:
- `models`: consist of all the model and quantization-related procedures
- `results`: saves the model checkpoints
- `data`: consists of the CIFAR-10 data
- `model_trainer.py`: sets up training, validation and hooking
- `main.py`: code to run
- `config.py`: has some configurations and hyperparameters
- `testvectors.py`: produces the testing vectors (currently only for 4-bit but will be tweaked to produce for the 2-bit too)
- `{model_name}_{nij}_{kij}_psum.txt`: consists of the psums for a given kij across nij to nij+8 (8 is a hyperparameter, I can expand it)
- `{model_name}_{kij}_weights.txt`: consists of the weights for a given kij
- `{model_name}_{nij}_activations.txt`: consists of the activations across nij to nij+8 (8 is a hyperparameter, I can expand it)`

## Baseline

VGGNet16 with the following features:
- 4-bit activations, 4-bit weights
- BatchNorm removed in layer X (the layer with 8 bit inputs and 8 bit outputs)  
Note that the layer we are recreating utilizes the following parameter sizes:
- kernel size: $3\times3$
- input_dim (w/out padding): $\text{batchsize}\times 8 \times 4 \times 4 $
- output_dim: $\text{batchsize}\times 8 \times 4 \times 4 $
- weights_dim: $8 \times 8 \times 3 \times$

Currently it is hitting ~87%  on 4-bit and ~60% on the 2-bit so some tuning will be needed!

Techniques used:
- Hybrid Scheduler (Warmup + Cosine Annealing) with top lr 2e-2 (20 epochs warmup , 100 cosine annealing)
- SGD on batch size of 128 with 0.93 momemntum (no weight decay)
- weight alpha: 8.0 and act alpha: 16.0 (training on 12.0 soon)
- 

## Future Improvements
TBD (currently have a hashed out form of LogQuant)
