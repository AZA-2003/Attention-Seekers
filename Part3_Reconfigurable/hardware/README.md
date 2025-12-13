Hardware folder layout and quick run steps

Place sources in `verilog/`, data files in `datafiles/`, and the `filelist` in `sim/`.

Run steps (for reference):
```pwsh
cd Part3_Reconfigurable/hardware/sim
iveri filelist
irun
```

The default testbench should exercise all reconfigurable modes without recompilation.
