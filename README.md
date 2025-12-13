# ECE 284 — Final Project Deliverables

![Folder structure preview](images/folder_structure.svg)

## Important: Submission structure and naming
- Your submission must be a single ZIP file named exactly: `ECE284_Team_<Teamname>.zip`.
- The ZIP must preserve the directory layout shown below. Not following the structure can incur up to a 15% penalty.

Top-level folders (required):
- `Part1_Vanilla`
- `Part2_SIMD`
- `Part3_Reconfigurable`
- `Part4_Poster`
- `Part5_Alpha`
- `Part6_Report`
- `Part7_ProgressReport`

Each part described below contains required files and folder structure. Follow the naming and paths exactly so TAs can run automated checks.

---

## Part1_Vanilla

Folder layout (summary):
- `software/` (5%):
  - `VGG16_Quantization_Aware_Training.ipynb`
  - `VGG16_Quantization_Aware_Training.pdf`
  - `misc/` (any extra scripts or notes)
- `hardware/` (15%):
  - `verilog/` — all HDL sources, e.g. `core.v`, `corelet.v`, `mac_array.v`, etc.
  - `datafiles/` — input files used by the testbench: `weight.txt`, `activation.txt`, `psum.txt` (may be multiple files for different parameter sets)
  - `sim/` — simulation files and the runtime filelist
    - `filelist` — REQUIRED: a plain text file named exactly `filelist` (no extension). This file should contain relative paths to the design files under `verilog/` (example shown later). Do NOT use absolute paths.
- `synth/` (10%):
  - `FPGA_Report.pdf` — include a table with measured parameters (area, LUTs/FFs, freq, power estimates, etc.). The example values in class are illustrative only.

What TAs will do (automated checks):
- `cd Part1_Vanilla/hardware/sim`
- `iveri filelist` (5%) — compile using the provided `filelist`; successful compile gives full credit for compilation.
- `irun` (5%) — run simulation; your design must produce correct outputs. Passing gives full/half credits per described grading breakdown.
- TAs will then replace the weight files in `Part1_Vanilla/hardware/datafiles` with their own test vectors and re-run `irun` (5%) to check verification with instructor files. Your design must both pass correct verification and fail when an incorrect `psum` is provided.

Notes:
- Keep `filelist` entries relative so TAs can compile directly from your submitted folders.
- Include a short README in `Part1_Vanilla` explaining how to invoke the simulation if non-standard steps are required.

---

## Part2_SIMD

Folder layout (summary):
- `software/` (5%):
  - `VGG16_Quantization_Aware_Training.ipynb` (include models for 2-bit activations and 4-bit weights as required)
  - `VGG16_Quantization_Aware_Training.pdf`
  - `misc/`
- `hardware/` (15%):
  - `verilog/` (design files)
  - `datafiles/` (separate sets for 2-bit and 4-bit cases)
  - `sim/` (simulation folder with `filelist` named exactly `filelist`)

What TAs will do:
- `cd Part2_SIMD/hardware/sim`
- `iveri filelist` (5%) — compile using the provided `filelist`.
- `irun` (5%) — run simulation. Your default testbench should exercise both the 4-bit-activation and 2-bit-activation modes without requiring recompilation. If your testbench runs both modes automatically, TAs will evaluate outputs accordingly.
- TAs will then update `Part2_SIMD/hardware/datafiles` with instructor-provided weight files and re-run `irun` (5%) to verify correctness and negative tests (e.g., incorrect `psum`).

---

## Part3_Reconfigurable

Structure and requirements are analogous to Parts 1 and 2. Use the same layout:
- `software/` (5%): include training notebook, PDF and `misc/`.
- `hardware/` (15%): `verilog/`, `datafiles/`, `sim/` with `filelist`.

What TAs will do:
- `cd Part3_Reconfigurable/hardware/sim`
- `iveri filelist` (5%) — compile using the provided `filelist`.
- `irun` (5%) — run simulation; the default testbench should cover the expected reconfigurable modes without requiring recompilation.
- TAs will replace `datafiles` with instructor vectors and re-run verification (5%). Your design should pass positive tests and fail on intentionally incorrect `psum` inputs.

---

## Part4_Poster

- Place your project poster PDF and the `Alpha` progress report (from any prior submission) in this folder. Include a short README describing poster authors and any display notes.

---

## Part5_Alpha

For each Alpha submission, include a separate subfolder named like `Alpha1_<Name>` containing:
- Required source files (follow software/hardware layouts from Part1 depending on the alpha type).
- A `README` describing how to validate and run the Alpha submission (commands, expected outputs, and any configuration). This makes it easier to validate your alphas faster and avoids grading delays.

---

## Part6_Report

- Your final written report (2–5 pages) should clearly state for each part:
  - What was implemented
  - Observed results and measured numbers
  - Interpretation and conclusions
- Keep the report within the 2–5 page limit.

## Part7_ProgressReport

Add your progress report files here. Name the main file `ProgressReport.pdf` (PDF preferred).
Just fill in the status of all your parts, and alpha in very short as you did for poster submission.
  - A template `ECE284 Progress Report.docx` is present in `Part7_ProgressReport/` — replace it with your updated pdf.

---

## General notes and best practices
- Always use relative paths inside `filelist` and other project files; do not include absolute paths with usernames.
- Name the filelist exactly `filelist` with no extension — plain ASCII text listing relative paths to HDL sources.
- Include concise READMEs where useful to help run your design without assumptions.
- If your project requires special steps or non-standard tools, document those steps and include any scripts needed to reproduce the results.

Example of filelist:

![Filelist example](images/filelist_example.svg)
