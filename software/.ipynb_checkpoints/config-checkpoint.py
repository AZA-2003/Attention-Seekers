SCRIBE = "./training_prog.txt"
BATCH_SIZE = 128
# EPOCHS = 120
# WARMUP_STEPS = 40
EPOCHS = 80
WARMUP_STEPS = 10
#WARMUP_STEPS = 3
#LR = 2e-5
#LR_4bit = 2e-3

## Hyperparameters for Rotation Quantization
BATCH_SIZE_r = 128
EPOCHS_r = 120
WARMUP_STEPS_r = 20
LR_4bit_r = 1e-2
WEIGHT_DECAY_r = 1e-4
BETAS_r = (0.9,0.999)
MOMENTUM_r = 0.93
# LR_2bit = 2e-1

## Hyperparameters for Orchid
LR_4bit_o = 8e-2
LR_2bit_o = 1e-2
# LR_4bit_o = 2e-1
## Other Hyperparameters
LR_4bit = 1e-2
LR_2bit = 1e-2
WEIGHT_DECAY = 1e-4
MOMENTUM = 0.93
EPOCHS_P = 60
WARMUP_STEPS_P = 10
PRUNE_PERC = 0.7
# PRUNE_PERC = 0.5