## Directory Structure ##

The structure of the directories here are as follows:

1) src: This directory contains all .v files that include all of the design modules. Files here will strictly be verilog files.
2) tb: This directory contains all TB files that integrate our designs. Testbenches here can be module-level TBs or top-level TBs (e.g. core_tb)
3) sim: This directory is the launchpoint for any simulation that we wish to run. Below are the types of files you will find here:
  - run_* scripts: These scripts use the 'verilator' compiler to run a TB simulation. The TB that we would be running can found be in the name of the script:
    e.g. l0_and_mac_array_tb.sv -> run_l0_and_mac_array_tb script.
  - filelists: This directory contains all filelists that are used in the TB + design compilation.
  - waveforms: This contains the .gtkw waveform viewing files that can be used to conveniently view the waveforms of the simulations in gtkwave.

## Running a Simulation ##

1) Navigate into the 'sim' directory:
2) Run one of the run scripts: e.g. run_l0_and_mac_array_tb to compile and run the simulation.
3) Examine the output log of the simulation - there will be INFO and ERROR messages that can be reviewed.
4) Examine the generated waveforms using gtkwave, e.g.
   gtkwave l0_and_mac_array_tb.vcd

5) When using gtkwave, use a waveform viewing file for convenient waveform viewing by clicking: File -> Read Save File and then select 'waveforms' and then select the correct .gtkw file.

- If you would like to add a new simulation, please follow the same structure that is shown here to maintain clean organization :)

NOTE: Please be careful not to check in any .vcd file or 'obj_dir' file from verilator here.


