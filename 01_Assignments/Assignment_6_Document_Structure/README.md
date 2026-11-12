# Assignment 6: Fonts, Spacing, Numbering, Boxes, Index, and Bibliography

Complete solution covering XeLaTeX with fontspec, custom fonts, spacing, hyphenation, boxes, indexing, and bibliography management.

## Assignment Overview

**Source**: Assignment 6.pdf  
**Topics**: XeLaTeX, fontspec, fonts, spacing, numbering, boxes, index, bibliography  
**Compiler Required**: **XeLaTeX** (not pdfLaTeX)

## Questions Checklist

- [x] Section A: Fonts and Background
  - [x] System font usage with fontspec
  - [x] DejaVu Serif (main font)
  - [x] DejaVu Sans (sans-serif font)
  - [x] Courier New (monospace font)
  - [x] Page background color
- [x] Section B: Spacing
  - [x] Line breaks vs new paragraphs
  - [x] Vertical spacing
  - [x] Hyphenation examples
  - [x] Side-by-side minipages
- [x] Section D: Numbering (Note: No section C in original)
  - [x] Alphabetic section numbering
  - [x] Equation numbering and cross-references
- [x] Section E: Boxes and Lines
  - [x] Savebox creation and reuse
  - [x] Paragraph box with wrapping
- [x] References and Index
  - [x] Citations with natbib
  - [x] Bibliography
  - [x] Index entries and printing

## Files

- `assignment6_solution.tex` - Complete LaTeX solution
- `references.bib` - BibTeX bibliography (reconstructed)

## Key Concepts Demonstrated

### XeLaTeX and fontspec

**Why XeLaTeX?**
- Access to system fonts (TrueType, OpenType)
- Better Unicode support
- Modern font handling
- Required for fontspec package

**fontspec basics**:
```latex
\usepackage{fontspec}
\setmainfont{DejaVu Serif}
\setsansfont{DejaVu Sans}
\setmonofont{Courier New}
```

**Conditional font loading**:
```latex
\IfFontExistsTF{Courier New}
  {\setmonofont{Courier New}}
  {\setmonofont{DejaVu Sans Mono}}
```

### Font Selection

**Switching fonts in text**:
```latex
Normal text in main font.
{\sffamily Sans-serif text.}
{\ttfamily Monospace text.}
```

**Declaration vs command**:
- `\sffamily` - Declaration (affects following text)
- `\textsf{text}` - Command (affects only argument)

### Page Color

```latex
\usepackage{xcolor}
\definecolor{pagecream}{HTML}{FFF8EA}
\pagecolor{pagecream}
```

### Spacing

**Line breaks**:
```latex
First line.\\          % Line break (same paragraph)
Second line.

Third line.            % New paragraph (blank line)
```

**Vertical spacing**:
```latex
\vspace{1cm}           % 1 cm vertical space
\medskip               % Medium skip
\bigskip               % Big skip
```

**Horizontal spacing**:
```latex
\hspace{2cm}           % 2 cm horizontal space
\quad                  % 1 em space
\qquad                 % 2 em space
```

### Hyphenation

**Manual hyphenation hints**:
```latex
\hyphenation{in-com-pre-hen-si-bil-i-ties}
```

**Preventing hyphenation**:
```latex
\mbox{unbreakableword}
```

### Section Numbering

**Alphabetic sections**:
```latex
\renewcommand{\thesection}{\Alph{section}}
```

**Manual counter manipulation**:
```latex
\setcounter{section}{3}  % Next section will be 4 (or D)
```

### Boxes

**Savebox** - Store and reuse content:
```latex
\newsavebox{\savedmessage}
\savebox{\savedmessage}{\fbox{Stored content}}
\usebox{\savedmessage}
```

**Paragraph box** - Fixed-width text box:
```latex
\fbox{\parbox{5cm}{Text wraps in this 5cm box.}}
```

**Other box commands**:
- `\mbox{text}` - Prevents line breaks
- `\fbox{text}` - Framed box
- `\framebox[width]{text}` - Framed box with width
- `\makebox[width]{text}` - Box with width (no frame)

### Index

**Setup**:
```latex
\usepackage{makeidx}
\makeindex              % In preamble
```

**Creating entries**:
```latex
\index{term}            % Index entry
\index{main term!sub term}  % Hierarchical entry
```

**Printing index**:
```latex
\printindex             % At end of document
```

### Bibliography with natbib

**Setup**:
```latex
\usepackage{natbib}
```

**Citations**:
```latex
\citep{key}             % Parenthetical (Author, Year)
\citet{key}             % Textual Author (Year)
\citeauthor{key}        % Author only
\citeyear{key}          % Year only
```

**Bibliography**:
```latex
\bibliographystyle{plainnat}
\bibliography{references}
```

## Packages Used

```latex
\usepackage{fontspec}      % System font access (XeLaTeX/LuaLaTeX)
\usepackage{xcolor}        % Colors
\usepackage{geometry}      % Page layout
\usepackage{makeidx}       % Index generation
\usepackage{natbib}        % Citations
```

## Compilation Instructions

### Full Compilation Sequence

```bash
xelatex assignment6_solution.tex
bibtex assignment6_solution
makeindex assignment6_solution
xelatex assignment6_solution.tex
xelatex assignment6_solution.tex
```

**Why each step?**
1. **First xelatex**: Create .aux file with citations and index entries
2. **bibtex**: Process bibliography, create .bbl file
3. **makeindex**: Process index entries, create .ind file
4. **Second xelatex**: Incorporate bibliography and index
5. **Third xelatex**: Resolve all cross-references

### Generated Files

- `.aux` - Auxiliary file with labels and citations
- `.bbl` - Formatted bibliography
- `.blg` - BibTeX log
- `.idx` - Raw index entries
- `.ind` - Formatted index
- `.ilg` - MakeIndex log
- `.toc` - Table of contents
- `.out` - Hyperref outline (if hyperref used)

## Section Numbering Strategy

The assignment has sections A, B, D, E (no section C). Implementation:

```latex
% In preamble
\renewcommand{\thesection}{\Alph{section}}

% Section A (automatic)
\section{Fonts and Background}

% Section B (automatic)
\section{Spacing}

% Skip C: set counter to 3 before next section
\setcounter{section}{3}

% Section D (will be labeled D)
\section{Numbering}

% Section E (automatic)
\section{Boxes and Lines}
```

## BibTeX Database

The assignment mentions an attached bibliography file that was not included. The `references.bib` file is reconstructed from the two references printed in the PDF:

```bibtex
@book{oetiker2021,
  author    = {Oetiker, Tobias},
  title     = {The Not So Short Introduction to {LaTeX} 2e},
  year      = {2021},
  publisher = {CTAN}
}

@misc{overleafBibTeX,
  author       = {{Overleaf}},
  title        = {Bibliography Management with BibTeX},
  howpublished = {\url{https://www.overleaf.com/learn/latex/Bibliography_management_with_bibtex}},
  note         = {Accessed for the course reference}
}
```

**Note**: Add `\usepackage{url}` or `\usepackage{hyperref}` for the `\url` command.

## Font Installation

### System Font Requirements

**DejaVu Fonts** (usually pre-installed on Linux/macOS):
- DejaVu Serif
- DejaVu Sans
- DejaVu Sans Mono

**Courier New** (comes with Microsoft Office or Windows):
- Courier New

### Installing Fonts

**Ubuntu/Debian**:
```bash
sudo apt install fonts-dejavu fonts-liberation
```

**macOS**:
DejaVu fonts usually pre-installed. If not:
```bash
brew install --cask font-dejavu
```

**Windows**:
DejaVu fonts may need manual installation from https://dejavu-fonts.github.io/

### Font Fallbacks

The solution includes fallback logic:
```latex
\IfFontExistsTF{Courier New}
  {\setmonofont{Courier New}}
  {\setmonofont{DejaVu Sans Mono}}
```

If Courier New is unavailable, DejaVu Sans Mono is used instead.

## Common Errors and Solutions

### Error: "Undefined control sequence \setmainfont"
**Solution**: 
- Use XeLaTeX, not pdfLaTeX
- Add `\usepackage{fontspec}`

### Error: "Font 'DejaVu Serif' not found"
**Solution**: 
- Install DejaVu fonts
- Use a different font name
- Check font name with `fc-list` on Linux/macOS

### Error: "! LaTeX Error: File `fontspec.sty' not found"
**Solution**: Update TeX distribution:
```bash
sudo tlmgr update --all    # TeX Live
```

### Compilation hangs or doesn't produce PDF
**Solution**: 
- Ensure all tools installed: `xelatex`, `bibtex`, `makeindex`
- Check log file for errors
- Try compiling steps individually

### Bibliography not appearing
**Solution**: 
- Run full sequence: xelatex → bibtex → xelatex → xelatex
- Check .blg file for BibTeX errors
- Ensure .bib file exists and has correct syntax

### Index not appearing
**Solution**: 
- Run full sequence including makeindex
- Check .ilg file for MakeIndex errors
- Ensure `\makeindex` in preamble and `\printindex` in document

### Wrong section numbering
**Solution**: 
- Check counter manipulation
- Ensure `\renewcommand{\thesection}{\Alph{section}}` is in preamble
- Compile twice to update numbering

## TeXstudio Configuration for XeLaTeX

**Set default compiler**:
1. Options → Configure TeXstudio
2. Build → Default Compiler
3. Select "XeLaTeX"
4. Apply and OK

**Or use magic comment** at top of .tex file:
```latex
% !TeX program = xelatex
```

## Advanced Topics

### OpenType Features
```latex
\setmainfont{Linux Libertine O}[
  Ligatures=TeX,
  Numbers=OldStyle
]
```

### Font Families
```latex
\newfontfamily\arabicfont{Arial}
```

### Bidirectional Text
XeLaTeX supports right-to-left scripts with appropriate packages.

## Related Course Materials

- Lecture slides on fonts and document structure
- Topic Notes: `02_LaTeX/03_Text_Formatting_and_Fonts/`
- Topic Notes: `02_LaTeX/15_Boxes_Spacing_and_Hyphenation/`
- Topic Notes: `02_LaTeX/13_Bibliography_Citations_and_References/`
- Topic Notes: `02_LaTeX/14_Index/`
- Reference: `08_Reference_Cheatsheets/LaTeX_Packages.md`

## Learning Outcomes

After completing this assignment, you should be able to:
- Compile documents with XeLaTeX
- Use system fonts with fontspec
- Apply custom page colors
- Control spacing and hyphenation
- Manipulate section numbering
- Create and reuse saveboxes
- Generate an index
- Manage bibliographies with natbib
- Understand compilation sequences for complex documents
- Handle missing fonts gracefully

## Troubleshooting Checklist

- [ ] XeLaTeX installed and working
- [ ] Required fonts available on system
- [ ] fontspec package installed
- [ ] Correct compiler selected in editor
- [ ] All five compilation steps executed
- [ ] No errors in .log file
- [ ] .bib file present and valid
- [ ] Index entries added with `\index{}`
- [ ] Bibliography style compatible with natbib

## Extension Ideas

1. Add more index entries with hierarchical structure
2. Include cross-references between sections
3. Add more bibliography entries
4. Experiment with different system fonts
5. Create custom box styles with TikZ
6. Add headers and footers
7. Include figures with wrapped text
8. Create a glossary alongside the index
