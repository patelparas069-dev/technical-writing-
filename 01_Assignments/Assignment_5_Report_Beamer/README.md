# Assignment 5: Report Class and Beamer Presentation

Complete solution with both a report-class document featuring custom headers/footers and a Beamer presentation.

## Assignment Overview

**Source**: Assignment 5.pdf  
**Topics**: Report document class, custom headers/footers, chapter styling, Beamer presentations

## Questions Checklist

### Part A: Report Document
- [x] Use report document class
- [x] Custom title page without headers/footers
- [x] Custom header on all pages (student name, course, date)
- [x] Style chapter headings (red, bold, Huge)
- [x] Style section headings (magenta, italic, Large)
- [x] Style subsection headings (orange, bold)
- [x] Create chapters, sections, and subsections
- [x] Include abstract and table of contents

### Part B: Beamer Presentation
- [x] Create 3-4 slides
- [x] Title slide with author and institution
- [x] Content slides with bullet points
- [x] Use theme (Madrid)
- [x] Include blocks and columns
- [x] Mathematical equation
- [x] Conclusion slide

## Files

- `report/assignment5_report.tex` - Report class document
- `beamer/assignment5_presentation.tex` - Beamer presentation

## Key Concepts Demonstrated

### Report Class

**Document class**:
```latex
\documentclass[12pt,a4paper]{report}
```

**Key differences from article**:
- Has `\chapter{}` command (top-level sectioning)
- Chapters start on new page
- Default page style includes headers
- Suitable for longer documents (theses, books)

**Sectioning hierarchy**:
1. `\chapter{}` - Highest level (report/book only)
2. `\section{}`
3. `\subsection{}`
4. `\subsubsection{}`
5. `\paragraph{}`
6. `\subparagraph{}`

### Custom Headers and Footers (fancyhdr)

**Setup**:
```latex
\usepackage{fancyhdr}
\pagestyle{fancy}
\fancyhf{}                          % Clear all
\fancyhead[L]{Left header}
\fancyhead[C]{Center header}
\fancyhead[R]{Right header}
\renewcommand{\headrulewidth}{0.4pt}
```

**Page-specific styling**:
```latex
\thispagestyle{empty}               % No header/footer on this page
```

**Chapter pages** use `plain` style by default. Override with:
```latex
\fancypagestyle{plain}{%
  \fancyhf{}
  \fancyhead[L]{Content}
  % ...
}
```

### Section Styling (sectsty)

**Package**:
```latex
\usepackage{sectsty}
```

**Styling commands**:
```latex
\chapterfont{\color{red}\bfseries\Huge}
\sectionfont{\color{magenta}\itshape\Large}
\subsectionfont{\color{orange}\bfseries}
```

### Title Page

**Custom title page**:
```latex
\begin{titlepage}
  \thispagestyle{empty}     % No header/footer
  \centering
  \vspace*{2cm}
  {\Huge\bfseries Title\par}
  \vspace{2cm}
  {\Large Author Name\par}
  % ...
\end{titlepage}
```

### Beamer Basics

**Document class**:
```latex
\documentclass{beamer}
\usetheme{Madrid}
```

**Title information**:
```latex
\title{Presentation Title}
\subtitle{Optional Subtitle}
\author{Author Name}
\institute{Institution}
\date{\today}
```

**Frames (slides)**:
```latex
\begin{frame}
  \titlepage
\end{frame}

\begin{frame}{Slide Title}
  Content here
\end{frame}
```

### Beamer Features

**Bullet points**:
```latex
\begin{itemize}
  \item First point
  \item Second point
\end{itemize}
```

**Blocks**:
```latex
\begin{block}{Block Title}
  Block content
\end{block}

\begin{alertblock}{Alert}
  Alert content
\end{alertblock}

\begin{exampleblock}{Example}
  Example content
\end{exampleblock}
```

**Columns**:
```latex
\begin{columns}
  \column{0.48\textwidth}
    Left column content
  \column{0.48\textwidth}
    Right column content
\end{columns}
```

**Mathematical content**:
```latex
\begin{frame}{Math Example}
  \[
    E = mc^2
  \]
\end{frame}
```

## Packages Used

### Report Document
```latex
\usepackage[margin=1in]{geometry}   % Page margins
\usepackage{xcolor}                 % Colors
\usepackage{sectsty}                % Section styling
\usepackage{fancyhdr}               % Headers/footers
\usepackage{setspace}               % Line spacing (optional)
```

### Beamer Presentation
```latex
% Beamer loads many packages automatically
\usetheme{Madrid}                   % Theme
```

## Compilation Instructions

### Report Document
```bash
cd report/
pdflatex assignment5_report.tex
pdflatex assignment5_report.tex
```

Two compilations ensure table of contents is correct.

### Beamer Presentation
```bash
cd beamer/
pdflatex assignment5_presentation.tex
pdflatex assignment5_presentation.tex
```

Two compilations for proper slide navigation and references.

## Color Definitions

```latex
\definecolor{titlemagenta}{RGB}{200,0,200}
\definecolor{titleorange}{RGB}{230,120,0}
```

## Editable Student Information

Both documents use custom commands for easy updates:

```latex
\newcommand{\StudentName}{Shlok Patel}
\newcommand{\StudentID}{[Your ID]}
\newcommand{\CourseTitle}{Technical Writing}
\newcommand{\InstructorName}{[Course Instructor]}
```

Update these once to change throughout the document.

## Report Class Features

### Abstract
```latex
\begin{abstract}
  Document summary here.
\end{abstract}
```

Appears after title, before table of contents.

### Table of Contents
```latex
\tableofcontents
```

Automatically generated from chapters, sections, subsections.

### Page Numbering
Default numbering can be customized:
```latex
\pagenumbering{roman}      % i, ii, iii
\pagenumbering{arabic}     % 1, 2, 3
```

## Beamer Themes

**Common themes**:
- Madrid (used in assignment)
- Berlin
- Copenhagen
- Singapore
- Warsaw
- CambridgeUS

**Change theme**:
```latex
\usetheme{Berlin}
```

**Theme customization**:
```latex
\usecolortheme{seahorse}
\usefonttheme{professionalfonts}
```

## Common Errors and Solutions

### Report Errors

**Error: "Undefined control sequence \chapter"**
**Solution**: Use `report` or `book` class, not `article`

**Warning: "Headheight too small"**
**Solution**: Add to preamble:
```latex
\setlength{\headheight}{15pt}
```

**Header appears on title page**
**Solution**: Use `\thispagestyle{empty}` inside `titlepage`

**Plain style not updating for chapter pages**
**Solution**: Redefine `plain` pagestyle:
```latex
\fancypagestyle{plain}{
  \fancyhf{}
  \fancyhead[L]{Content}
  % ...
}
```

### Beamer Errors

**Error: "Undefined control sequence \frame"**
**Solution**: Use `\begin{frame}...\end{frame}`, not `\frame{...}`

**Error: "Paragraph ended before \frame was complete"**
**Solution**: Check frame delimiters, ensure proper nesting

**Slides are blank**
**Solution**: 
- Check frame syntax
- Ensure content is inside `\begin{frame}...\end{frame}`
- Compile twice

**Navigation symbols cluttering slides**
**Solution**: Hide them:
```latex
\setbeamertemplate{navigation symbols}{}
```

## Best Practices

### Report Documents
1. **One chapter per major topic**
2. **Clear section hierarchy**
3. **Consistent formatting throughout**
4. **Meaningful chapter/section titles**
5. **Abstract summarizes entire document**
6. **Table of contents for navigation**

### Presentations
1. **One idea per slide**
2. **Minimal text (6-8 lines max)**
3. **Use bullet points, not paragraphs**
4. **High contrast colors**
5. **Large, readable fonts**
6. **Visual hierarchy with headings**
7. **Consistent theme throughout**

## Design Tips

### Headers
- Left: Author or document title
- Center: Course or chapter name
- Right: Date or page number

### Color Choices
- **Red**: Attention, important chapters
- **Magenta/Purple**: Professional, sections
- **Orange**: Warm, subsections
- **Blue**: Trust, body text (if colored)

Ensure sufficient contrast for readability.

### Slide Content
**Good slide**:
- Clear title
- 3-5 bullet points
- Concise text
- Visual element (if applicable)

**Bad slide**:
- Dense paragraphs
- Too much text
- No clear structure
- Tiny fonts

## Advanced Features

### Report: Appendices
```latex
\appendix
\chapter{Additional Data}
% Content
```

### Report: Bibliography
```latex
\bibliographystyle{plain}
\bibliography{references}
```

### Beamer: Overlays
```latex
\begin{itemize}
  \item<1-> Appears on slide 1+
  \item<2-> Appears on slide 2+
  \item<3-> Appears on slide 3+
\end{itemize}
```

Or use `\pause`:
```latex
\begin{itemize}
  \item First point
  \pause
  \item Second point (appears after click)
\end{itemize}
```

### Beamer: Handouts
```latex
\documentclass[handout]{beamer}  % Print-friendly version
```

## Related Course Materials

- Lecture_1_TW (1).pdf - Document structure
- Topic Notes: `02_LaTeX/02_Document_Classes_and_Structure/`
- Topic Notes: `02_LaTeX/05_Page_Layout_Headers_Footers/`
- Topic Notes: `03_Beamer/` - Complete Beamer guide
- Reference: `08_Reference_Cheatsheets/LaTeX_Commands.md`

## Learning Outcomes

After completing this assignment, you should be able to:
- Use the report document class appropriately
- Create custom headers and footers with fancyhdr
- Style chapters, sections, and subsections
- Create a professional title page
- Build a basic Beamer presentation
- Use Beamer themes
- Create slides with blocks and columns
- Include mathematical content in presentations
- Understand when to use report vs article class
- Choose appropriate presentation layouts

## Extension Ideas

1. Add chapter quotes or epigraphs
2. Include figures in both report and presentation
3. Create a bibliography in the report
4. Add slide numbers to Beamer
5. Experiment with different Beamer themes
6. Create handout notes for presentation
7. Add a table of contents slide in Beamer
8. Use custom colors in Beamer theme
