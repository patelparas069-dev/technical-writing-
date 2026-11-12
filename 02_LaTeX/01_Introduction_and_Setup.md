# Section 1: Introduction and Setup

## What is LaTeX?

LaTeX (pronounced "LAY-tek" or "LAH-tek") is a document preparation system for high-quality typesetting. It's particularly well-suited for technical and scientific documents containing mathematical formulas.

### Key Characteristics

- **Markup-based**: You write commands, not WYSIWYG
- **Content vs presentation**: Separates what you say from how it looks
- **Professional output**: Publication-quality typography
- **Free and open-source**: Available on all platforms
- **Extensible**: Thousands of packages for specialized needs

### LaTeX vs TeX

- **TeX**: Low-level typesetting system created by Donald Knuth (1978)
- **LaTeX**: Macro package built on TeX by Leslie Lamport (1984)
- **Modern**: pdfLaTeX, XeLaTeX, LuaLaTeX for different needs

## Why Use LaTeX?

### Advantages

1. **Professional quality**: Consistent, beautiful typography
2. **Mathematical equations**: Best system for complex math
3. **Large documents**: Handles books and theses efficiently
4. **Cross-references**: Automatic numbering and references
5. **Bibliography**: Powerful citation management
6. **Stability**: Documents compile the same way years later
7. **Platform independent**: Works everywhere
8. **Version control friendly**: Plain text works with Git

### Disadvantages

1. **Learning curve**: Steeper than WYSIWYG editors
2. **Compilation**: Not immediate preview (though editors help)
3. **Debugging**: Error messages can be cryptic
4. **Collaboration**: Requires all collaborators to know LaTeX
5. **Fine-tuning layout**: Can be challenging

## Installation

### Windows

**MiKTeX** (recommended):
1. Download from https://miktex.org/download
2. Run installer
3. Choose "Install missing packages on-the-fly: Yes"
4. Install TeXstudio editor from https://www.texstudio.org/

**TeX Live**:
1. Download from https://www.tug.org/texlive/
2. Run install-tl-windows.exe
3. Full installation (~7 GB)

### macOS

**MacTeX** (TeX Live for Mac):
```bash
# Using Homebrew
brew install --cask mactex

# Or download from
# https://www.tug.org/mactex/
```

Includes TeXShop editor.

**Smaller installation**:
```bash
brew install --cask basictex
```

### Linux (Ubuntu/Debian)

```bash
# Full installation
sudo apt update
sudo apt install texlive-full

# Minimal installation
sudo apt install texlive-latex-base

# Recommended packages
sudo apt install texlive-latex-extra texlive-fonts-recommended

# Editor
sudo apt install texstudio
```

### Online (No Installation)

**Overleaf**: https://www.overleaf.com/
- Free tier available
- Collaborate in real-time
- No local installation needed
- Templates provided

## Editors

### TeXstudio (Recommended for Beginners)

**Features**:
- Cross-platform
- Integrated PDF viewer
- Syntax highlighting
- Auto-completion
- Built-in error checking
- Spell checker

**Download**: https://www.texstudio.org/

### Other Popular Editors

**VS Code** with LaTeX Workshop extension:
- Modern, extensible
- Git integration
- Multiple cursors
- Requires more setup

**TeXmaker**:
- Similar to TeXstudio
- Slightly simpler interface

**Vim/Emacs** with LaTeX plugins:
- For advanced users
- Highly customizable

## Your First LaTeX Document

### Minimal Example

Create a file `hello.tex`:

```latex
\documentclass{article}
\begin{document}
Hello, World!
\end{document}
```

### Compilation

```bash
pdflatex hello.tex
```

This creates:
- `hello.pdf` - The output document
- `hello.aux` - Auxiliary file for cross-references
- `hello.log` - Compilation log with warnings/errors

### Viewing

Open `hello.pdf` in any PDF viewer, or use the editor's integrated viewer.

## Document Structure

### Basic Structure

```latex
\documentclass{article}       % Document class

% PREAMBLE: Settings and packages
\usepackage{amsmath}         % Load packages
\title{My Document}          % Set title
\author{Your Name}           % Set author
\date{\today}                % Set date

\begin{document}             % Start document body

\maketitle                   % Create title page

\section{Introduction}       % Create section
This is the content.

\end{document}               % End document
```

### Document Parts

1. **Document class** (required): `\documentclass{...}`
2. **Preamble** (optional): Between `\documentclass` and `\begin{document}`
3. **Document body** (required): Between `\begin{document}` and `\end{document}`

## Document Classes

### Standard Classes

| Class | Purpose |
|-------|---------|
| `article` | Short documents, papers |
| `report` | Longer reports, theses (has chapters) |
| `book` | Books (two-sided by default) |
| `letter` | Letters |
| `beamer` | Presentations |

### Class Options

```latex
\documentclass[options]{class}
```

Common options:
- **Font size**: `10pt`, `11pt`, `12pt` (default: 10pt)
- **Paper**: `a4paper`, `letterpaper` (default: letterpaper)
- **Sides**: `oneside`, `twoside`
- **Columns**: `onecolumn`, `twocolumn`
- **Title page**: `titlepage`, `notitlepage`

Example:
```latex
\documentclass[12pt,a4paper]{article}
```

## Basic Formatting

### Paragraphs

```latex
This is the first paragraph.

This is the second paragraph.
% Blank line creates new paragraph
```

Multiple spaces are treated as one space. Line breaks in source don't create line breaks in output.

### Manual Line Break

```latex
First line\\
Second line
```

Use `\\` sparingly. Usually, a blank line (new paragraph) is better.

### Comments

```latex
% This is a comment
Text here % Inline comment
```

Comments are ignored in output.

### Special Characters

These characters have special meaning and must be escaped:

| Character | Escaped | Purpose |
|-----------|---------|---------|
| `#` | `\#` | Parameter in commands |
| `$` | `\$` | Math mode |
| `%` | `\%` | Comments |
| `&` | `\&` | Table alignment |
| `_` | `\_` | Subscript in math |
| `{` | `\{` | Group delimiter |
| `}` | `\}` | Group delimiter |
| `~` | `\~{}` | Non-breaking space |
| `^` | `\^{}` | Superscript in math |
| `\` | `\textbackslash` | Command prefix |

Example:
```latex
Price is \$100. You get 50\% off!
```

## Complete Example

`example.tex`:

```latex
\documentclass[12pt,a4paper]{article}

% Preamble
\usepackage[margin=1in]{geometry}
\usepackage{amsmath}

\title{My First LaTeX Document}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}
This is my first LaTeX document. LaTeX is great for
typesetting documents with mathematical content.

\section{Why LaTeX?}
Here are some reasons:
\begin{itemize}
  \item Professional typography
  \item Excellent math support
  \item Automatic cross-references
\end{itemize}

\section{A Simple Equation}
Einstein's famous equation is:
\[
E = mc^2
\]

\section{Conclusion}
LaTeX is worth learning!

\end{document}
```

## Compilation Workflow

### Single File

```bash
pdflatex document.tex
```

### With References

```bash
pdflatex document.tex
pdflatex document.tex  # Run twice
```

First run creates `.aux` file, second run resolves references.

### Full Workflow (with bibliography)

```bash
pdflatex document.tex
bibtex document
pdflatex document.tex
pdflatex document.tex
```

## Common Errors

### Error: "File not found"

```
! LaTeX Error: File `package.sty' not found.
```

**Solution**: Install the missing package
```bash
# TeX Live
tlmgr install package-name

# MiKTeX
# Packages install automatically on first use
```

### Error: "Undefined control sequence"

```
! Undefined control sequence.
l.10 \awesomecommand
```

**Solution**: 
- Check spelling
- Load required package
- Define custom command

### Error: "Missing $ inserted"

```
! Missing $ inserted.
<inserted text> 
                $
l.10 x^2
```

**Solution**: Use math mode for math:
```latex
$x^2$ or \(x^2\) for inline
\[x^2\] for display math
```

### Warning: "Overfull \hbox"

```
Overfull \hbox (10.0pt too wide) in paragraph at lines 10--12
```

**Solution**: 
- LaTeX can't break line properly
- Rephrase text
- Allow hyphenation: `\-`
- Use `\sloppy` for paragraph (not recommended)

## Tips for Beginners

1. **Start simple**: Use basic document, add features gradually
2. **Compile often**: Catch errors early
3. **Read error messages**: Line numbers help locate problems
4. **Use templates**: Learn from working examples
5. **One concept at a time**: Don't try to learn everything at once
6. **Keep reference handy**: Symbol tables, command lists
7. **Practice**: Try modifying examples
8. **Ask for help**: TeX Stack Exchange is friendly

## File Management

### Recommended Structure

```
project/
├── main.tex           # Main document
├── sections/
│   ├── intro.tex
│   └── conclusion.tex
├── images/
│   ├── figure1.png
│   └── figure2.pdf
├── references.bib     # Bibliography
└── output/            # Compiled files (optional)
```

### Input Other Files

```latex
\input{sections/intro}      % Include intro.tex
\include{sections/intro}    % Include with page break
```

## Next Steps

1. Practice with the examples in this section
2. Experiment with different document classes
3. Try adding more sections
4. Move on to Section 2 (Document Classes and Structure)
5. Complete Assignment 1 for hands-on practice

## Resources

- **Official documentation**: `texdoc latex`
- **Wikibook**: https://en.wikibooks.org/wiki/LaTeX
- **Stack Exchange**: https://tex.stackexchange.com/
- **Detexify**: http://detexify.kirelabs.org/classify.html (draw symbols)
- **Tables generator**: https://www.tablesgenerator.com/

## Exercises

1. Create a hello world document
2. Add your name and date
3. Create three sections
4. Include special characters: $, %, &
5. Add a bullet list with 3 items
6. Compile successfully to PDF
