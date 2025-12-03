# Testbench Vectors
## 4-bit
- `{model_name}_{nij}_{kij}_psum.txt`: consists of the psums for a given kij across nij to nij+36
- `{model_name}_{kij}_weights.txt`: consists of the weights for a given kij
- `{model_name}_{nij}_activations.txt`: consists of the activations across nij to nij+36
- - `{model_name}_{nij}_output.txt`: consists of the final output across nij to nij+36
## 2-bit
- `{model_name}_{tile_id}_{nij}_{kij}_psum.txt`: consists of the psums for a given kij across nij to nij+36 for a given tile
- `{model_name}_{tile_id}_{kij}_weights.txt`: consists of the weights for a given kij for a given tile
- `{model_name}_{tile_id}_{nij}_output.txt`: consists of the final output across nij to nij+36 for a given tile