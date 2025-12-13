datafiles/ — input vectors for simulation

This directory should contain the input data files used by the testbench and verification scripts for Part3_Reconfigurable.

Expected files (you can add the required number of each file below with appropriate suffixes):
- weight_kij0.txt, weight_kij1.txt...   — weight values
- activation.txt                        — activation/input values
- psum.txt                              — expected partial-sum / golden outputs

Guidelines:
- Provide separate sets for each reconfigurable mode if required and name them clearly.
- TAs may replace these files with instructor-provided vectors for grading; ensure your testbench reads files from this relative folder.
- If your testbench expects different filenames or formats, document that in `Part3_Reconfigurable/hardware/README.md`.