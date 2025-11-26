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

## Baseline

VGGNet16 with the following features:
- 4-bit activations, 4-bit weights
- BatchNorm removed in layer X (the layer with 8 bit inputs and 8 bit outputs) 

Currently it is hitting ~75% so some tuning will be needed!

## Future Improvements
TBD (currently have a hashed out form of LogQuant)
