# Software Docs
This directory handles model training and quantization
## Folder Info
Info about the files and directories:
### Folders
- `data`: CIFAR-10 dataset for model training and validation
- `models`: consist of all the model and quantization-related procedures
- `results`: saves the model checkpoints
- `data`: consists of the CIFAR-10 data
### Files
- `model_trainer.py`: sets up training, validation and hooking
- `main.py`: code to run
- `config.py`: model configurations and hyperparameters
- `models/vgg_rotaquant.py`: implementation of vvgnet model with quantization rotation matrix (alpha 5)
- `models/rota_quant_layer.py`: implementation of the quantization by rotation matrices module (alpha 5)
- `orchid_optim.py`: implementation of the Orchid Optimizer (alpha 3)
- `pruning.py`: prunes pretrained models (alpha 4)
- `pruning_test.py`: measures sparisty of non-pruned models (for reference purposes)
- `rotaquant_test.py`: tests quantization with rotation matrices (alpha 5)
- `testvectors.py`: produces the testing vectors for 4-bit model
- `testvectors_2bit.py`: produces the testing vectors for 2-bit model
- `testvectors_os.py`: produces the testing vectors for the 4-bit output stationary


