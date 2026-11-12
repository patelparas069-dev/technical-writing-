# Technical Writing — Complete Course Repository

A comprehensive GitHub-ready repository documenting a complete semester of Technical Writing coursework, including all assignments with worked solutions, detailed topic notes, and practical examples.

## 📚 Course Overview

This repository covers professional technical documentation and communication tools essential for academic and industry work:

- **LaTeX**: Document preparation system for technical and scientific documents
- **Beamer**: LaTeX-based presentation framework
- **Git & GitHub**: Version control and collaborative development
- **Doxygen**: Automated source code documentation
- **Google Docs**: Collaborative document editing
- **Presentation Skills**: Effective technical communication

## 📁 Repository Structure

```
Technical-Writing/
├── 00_Source_Material/          # Original course materials and assets
├── 01_Assignments/              # All assignments with complete solutions
├── 02_LaTeX/                    # Comprehensive LaTeX notes (16 sections)
├── 03_Beamer/                   # Beamer presentation guide
├── 04_Git_and_GitHub/           # Git version control complete guide
├── 05_Doxygen/                  # Source code documentation notes
├── 06_Google_Docs/              # Google Docs collaboration guide
├── 07_Presentations/            # Technical presentation skills
├── 08_Reference_Cheatsheets/    # Quick reference for exam revision
└── 09_Complete_Demonstrations/  # Full working examples
```

## 📝 Assignments Index

### Assignment 1: LaTeX Introduction
**Location**: `01_Assignments/Assignment_1_LaTeX_Introduction/`  
**Topics**: Hello World, document structure, equations, citations, BibTeX  
**Key Files**: `assignment1_solution.tex`, `physics.bib`

### Assignment 3: Mathematical Typesetting
**Location**: `01_Assignments/Assignment_3_Mathematics/`  
**Topics**: Inline/display math, fractions, symbols, calculus, matrices  
**Key Files**: `assignment3_math.tex`

### Assignment 3 TW Lab: Arrays and Tables
**Location**: `01_Assignments/Assignment_3_TW_Lab_Arrays_Tables/`  
**Topics**: Overbrace/underbrace, arrays, cases, multirow/multicolumn, colors, booktabs, nested tables  
**Questions**: 14 complete questions with solutions  
**Key Files**: `assignment3_tw_lab.tex`

### Assignment 4: Lists, Colors, and Figures
**Location**: `01_Assignments/Assignment_4_Lists_Colors_Figures/`  
**Topics**: Itemize, enumerate, description lists, RGB/HTML colors, figures, image rotation/cropping, minipages  
**Key Files**: `assignment4_solution.tex`, `assets/mnit_logo.png`, `assets/mnit_building.jpg`

### Assignment 5: Report and Beamer
**Location**: `01_Assignments/Assignment_5_Report_Beamer/`  
**Topics**: Report class, custom headers/footers, chapter styling, Beamer themes, blocks, columns  
**Key Files**: `report/assignment5_report.tex`, `beamer/assignment5_presentation.tex`

### Assignment 6: Fonts, Spacing, and Bibliography
**Location**: `01_Assignments/Assignment_6_Document_Structure/`  
**Topics**: XeLaTeX, fontspec, custom fonts, spacing, hyphenation, boxes, index, natbib  
**Key Files**: `assignment6_solution.tex`, `references.bib`  
**Compiler Required**: XeLaTeX

### Assignment 7 (Internal: Assignment 9): Doxygen
**Location**: `01_Assignments/Assignment_7_Doxygen/`  
**Topics**: C++ documentation, Doxygen comments, tags, HTML/PDF generation  
**Key Files**: `src/Logger.h`, `src/CalculationEngine.h`, `src/main.cpp`, `Doxyfile`

### Assignment 9 TW (Internal: Assignment 11): Git Branching
**Location**: `01_Assignments/Assignment_9_Git_Branching/`  
**Topics**: Branch creation, merging, conflict resolution, stash  
**Key Files**: `commands.md`, `exercise_report.md`, `demo_repository/`

## 🔧 Setup and Prerequisites

### LaTeX Environment
- **TeX Distribution**: TeX Live (Linux), MiKTeX (Windows), MacTeX (macOS)
- **Editor**: TeXstudio, Overleaf, VS Code with LaTeX Workshop
- **Compilers**: 
  - `pdflatex` for most assignments
  - `xelatex` for Assignment 6 (fontspec)
- **Tools**: `bibtex`, `makeindex`

### Git
```bash
# Install Git
sudo apt install git        # Ubuntu/Debian
brew install git            # macOS
```

### Doxygen
```bash
# Install Doxygen
sudo apt install doxygen    # Ubuntu/Debian
brew install doxygen        # macOS
```

### C++ Compiler (for Doxygen assignment)
```bash
# GCC/G++
sudo apt install build-essential
```

## 🚀 How to Use This Repository

### Compiling LaTeX Assignments

**Standard Compilation (Assignments 1, 3, 4, 5):**
```bash
cd 01_Assignments/Assignment_1_LaTeX_Introduction/
pdflatex assignment1_solution.tex
pdflatex assignment1_solution.tex
```

**With BibTeX (Assignments 1, 6):**
```bash
pdflatex assignment1_solution.tex
bibtex assignment1_solution
pdflatex assignment1_solution.tex
pdflatex assignment1_solution.tex
```

**With XeLaTeX (Assignment 6):**
```bash
xelatex assignment6_solution.tex
bibtex assignment6_solution
makeindex assignment6_solution
xelatex assignment6_solution.tex
xelatex assignment6_solution.tex
```

**Beamer Presentations:**
```bash
cd 01_Assignments/Assignment_5_Report_Beamer/beamer/
pdflatex assignment5_presentation.tex
pdflatex assignment5_presentation.tex
```

### Running Doxygen

```bash
cd 01_Assignments/Assignment_7_Doxygen/

# Compile the C++ program
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o demo
./demo

# Generate documentation
doxygen Doxyfile

# View HTML output
open generated_docs/html/index.html

# Generate PDF (requires LaTeX)
cd generated_docs/latex
make
```

### Git Branch Exercise

```bash
cd 01_Assignments/Assignment_9_Git_Branching/demo_repository/

# Initialize and follow the exercise
git init
# Follow commands in commands.md
```

## 📖 Topic Notes

### LaTeX (16 Sections)
Navigate to `02_LaTeX/` for comprehensive coverage:
1. Introduction and Setup
2. Document Classes and Structure
3. Text Formatting and Fonts
4. Sections, Lists, and Numbering
5. Page Layout, Headers, Footers
6. Mathematics
7. Equations, Alignment, and Matrices
8. Tables
9. Colors
10. Figures, Images, and Floats
11. Picture Environment
12. Environments
13. Bibliography, Citations, and References
14. Index
15. Boxes, Spacing, and Hyphenation
16. Packages and Compilation

### Other Topics
- **Beamer**: `03_Beamer/` - Complete presentation guide
- **Git**: `04_Git_and_GitHub/` - Version control from basics to advanced
- **Doxygen**: `05_Doxygen/` - Source code documentation
- **Google Docs**: `06_Google_Docs/` - Collaborative editing
- **Presentations**: `07_Presentations/` - Delivery and design

## 📋 Quick Reference Cheatsheets

Located in `08_Reference_Cheatsheets/`:
- LaTeX Commands
- LaTeX Packages
- Math Symbols
- Table Commands
- Figure Commands
- Git Commands
- Doxygen Commands
- Compilation Workflows

## ⚠️ Important Notes

### Assignment Numbering
The course has two numbering systems:
- **Assignment 7.pdf** internally titled "Assignment 9 - Doxygen"
- **Assignment 9 TW.pdf** internally titled "Assignment 11 - Git Branching"

Both numbering schemes are preserved in folder names and documentation.

### Missing Source Files
- **Assignment 2** and **Assignment 8** were not provided in the course materials
- **Assignment 1**: Instructor's `first_latex_example.tex`, `first_latex_solutions.tex`, and original `physics.bib` were not included; reconstructed examples are provided and clearly marked
- **Assignment 6**: Attached bibliography file was not included; `references.bib` reconstructed from printed references in the PDF
- **Assignment 7**: Instructor's `Logger.h`, `CalculationEngine.h`, `main.cpp`, and Doxyfile template were not included; complete working examples reconstructed matching the assignment requirements

### Two Assignment 3 Files
There are two distinct Assignment 3 files:
- **Assignment 3.pdf**: Mathematical typesetting (6 sections)
- **Assignment_3_TW_lab.pdf**: Arrays and tables (14 questions)

Both are fully solved in separate folders.

## 🔍 Source Material

All original course PDFs are preserved unmodified in `00_Source_Material/PDFs/`:
- 8 Assignment PDFs
- 10 Lecture/Reference PDFs

See `00_Source_Material/SOURCE_INVENTORY.md` for complete file listing and coverage matrix.

## 📊 Validation Status

All LaTeX source files have been syntax-checked. Compilation status:
- Assignments 1, 3, 4, 5: Require `pdflatex` and standard packages
- Assignment 6: Requires `xelatex` and system fonts (DejaVu, Courier New)
- Doxygen project: Requires C++ compiler, Doxygen, and optionally LaTeX for PDF generation
- Git exercise: Tested command sequence with intentional merge conflict

See `09_Complete_Demonstrations/` for fully tested working examples.

## 🤝 How to Contribute

This repository serves as a course record. To update:
1. Verify changes against original course PDFs
2. Test all LaTeX compilations
3. Update relevant README files
4. Maintain consistent formatting and structure

## 📄 License

This repository is for educational purposes. No license is specified; refer to your institution's policies regarding course materials.

## 👤 Student Information

**Student Name**: Shlok Patel  
**Course**: Technical Writing  
**Semester**: 2025

---

**Last Updated**: 2026

For questions about specific assignments or topics, refer to the README.md files in each subdirectory.
