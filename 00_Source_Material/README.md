# Source Material

This folder contains all original course materials provided for the Technical Writing course.

## Contents

### PDFs/
Original course PDFs, unmodified and preserved exactly as provided:
- Assignment PDFs (8 files)
- Lecture and Reference PDFs (10 files)

### extracted_assets/
Images and assets extracted from assignment PDFs for use in solutions:
- `mnit_logo.png` - MNIT logo (extracted from Assignment 4.pdf)
- `mnit_building.jpg` - MNIT building photograph (extracted from Assignment 4.pdf)

## Important Notes

### Source PDFs Are the Authority
All assignment solutions and notes are derived from these original PDFs. When in doubt about requirements, refer to the source PDF.

### Missing Files
Several instructor-provided files referenced in assignments were not included in the course materials:
- Assignment 1: `first_latex_example.tex`, `first_latex_solutions.tex`, original `physics.bib`
- Assignment 6: Attached bibliography file
- Assignment 7: `Logger.h`, `CalculationEngine.h`, `main.cpp`, Doxyfile template

These have been reconstructed as complete working examples and are clearly marked as reconstructions.

### Missing Assignments
- Assignment 2.pdf - Not provided
- Assignment 8.pdf - Not provided

### Assignment Numbering
Note the dual numbering system:
- **Assignment 7.pdf** has internal title "Assignment 9 - Doxygen"
- **Assignment 9 TW.pdf** has internal title "Assignment 11 - Git Branching"

See SOURCE_INVENTORY.md for a complete file listing and coverage matrix.

## Image Extraction

Images embedded in Assignment 4.pdf were extracted using:
```bash
pdfimages -list "Assignment 4.pdf"
pdfimages -all "Assignment 4.pdf" extracted_asset_prefix
```

The extracted images maintain their original aspect ratios and quality.
