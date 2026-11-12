# Assignment 3 TW Lab: Arrays and Tables

Complete solution for the comprehensive tables assignment covering overbrace/underbrace, arrays, cases, multirow/multicolumn, colors, booktabs, and nested tables.

## Assignment Overview

**Source**: Assignment_3_TW_lab.pdf  
**Title**: Assignment 3 - 14 Questions on Arrays and Tables  
**Topics**: Mathematical arrays, table formatting, colors, professional tables

## Questions Checklist

- [x] Question 1: Overbrace and Underbrace
- [x] Question 2: Array Environment with separator lines
- [x] Question 3: Piecewise Function (cases)
- [x] Question 4: Matrix with Column Groups
- [x] Question 5: Quadratic and Matrix Contributions
- [x] Question 6: Student Information Table
- [x] Question 7: Multicolumn Heading
- [x] Question 8: Multirow Department Table
- [x] Question 9: Scientific Table with Colors
- [x] Question 10: Conditional Student-Performance Colors
- [x] Question 11: Paragraphs in Fixed-Width Columns
- [x] Question 12: Professional Booktabs Table
- [x] Question 13: Nested Table in a Cell
- [x] Question 14: Mathematical Expressions in a Table

## Files

- `assignment3_tw_lab.tex` - Complete solution with all 14 questions

## Key Concepts Demonstrated

### Mathematical Typography
- `\overbrace{expr}^{text}` - Brace over expression with label above
- `\underbrace{expr}_{text}` - Brace under expression with label below
- Nested overbrace/underbrace combinations
- `cases` environment for piecewise functions

### Array Environment
- Column specifications: `c` (center), `l` (left), `r` (right)
- Vertical lines: `|` between column specs
- Horizontal lines: `\hline` after rows
- Column/row separators: `&` and `\\`
- Custom separators: `@{\ }` for spacing

### Basic Tables
- `tabular` environment for table content
- `table` float environment for captions
- `|` for vertical borders
- `\hline` for horizontal borders
- `&` to separate columns
- `\\` to end rows

### Advanced Table Features
- **multicolumn**: `\multicolumn{n}{align}{text}` - Span multiple columns
- **multirow**: `\multirow{n}{width}{text}` - Span multiple rows
- **Fixed-width columns**: `p{width}`, `m{width}`, `b{width}`
- **Column width**: Paragraph wrapping in cells

### Colors in Tables
- `\rowcolor{color}` - Color entire row
- `\cellcolor{color}` - Color single cell
- `\color{white}` - Change text color
- `\definecolor{name}{model}{spec}` - Define custom colors
- Conditional coloring with `\ifnum` logic

### Professional Tables (booktabs)
- `\toprule` - Top horizontal line
- `\midrule` - Middle horizontal line
- `\bottomrule` - Bottom horizontal line
- No vertical lines (best practice)
- Clean, publication-ready appearance

### Advanced Techniques
- **tabularx**: Auto-width columns with `X` specifier
- **Nested tables**: Tables inside table cells
- **Math in tables**: Using `\displaystyle` for proper sizing
- **Conditional macros**: Custom commands for cell formatting

## Packages Used

```latex
\usepackage{amsmath,amssymb}      % Math support
\usepackage{array}                 % Enhanced arrays
\usepackage{multirow}              % Multirow cells
\usepackage{multicol}              % Multiple columns (document-level)
\usepackage[table]{xcolor}         % Colors with table support
\usepackage{colortbl}              % Colored tables
\usepackage{booktabs}              % Professional tables
\usepackage{tabularx}              % Auto-width tables
\usepackage{makecell}              % Enhanced cell formatting
\usepackage{graphicx}              % For \resizebox if needed
```

## Compilation Instructions

```bash
pdflatex assignment3_tw_lab.tex
pdflatex assignment3_tw_lab.tex
```

Two compilations ensure proper spacing and float positioning.

## Question-by-Question Guide

### Q1: Overbrace and Underbrace
Shows mathematical grouping and nesting:
```latex
\overbrace{a+b+c}^{\text{First Group}}
```

### Q2: Array Environment
Creates a matrix with header row and column labels separated by lines:
```latex
\begin{array}{c|ccc}
 & x_1 & x_2 & x_3 \\ \hline
y_1 & a_{11} & a_{12} & a_{13}
\end{array}
```

### Q3: Piecewise Function
Uses `cases` for functions defined by parts:
```latex
f(x) = \begin{cases}
x^2+2x+1, & x<0,\\
\sqrt{x}+1, & 0\le x<4
\end{cases}
```

### Q4: Matrix with Column Groups
Combines matrices with overbraces for column grouping.

### Q5: Quadratic and Matrix Contributions
Complex expression with multiple underbraces showing contribution breakdown.

### Q6: Student Information Table
Basic table with headers and borders:
```latex
\begin{tabular}{|c|l|c|c|c|}
\hline
\textbf{Roll No.} & \textbf{Name} & ... \\ \hline
101 & Amit & ... \\ \hline
\end{tabular}
```

### Q7: Multicolumn Heading
Uses `\multicolumn{3}{|c|}{\textbf{Academic Performance}}` to span columns.

### Q8: Multirow Department Table
Demonstrates `\multirow{3}{*}{CSE}` for spanning rows.

### Q9: Scientific Table with Colors
Uses defined colors for headers and alternating rows:
```latex
\rowcolor{headerblue}
\color{white}\textbf{Model}
```

### Q10: Conditional Student-Performance Colors
Implements custom `\markcell` macro with `\ifnum` for threshold-based coloring:
- Green: ≥90
- Yellow: 75-89
- Red: <75

### Q11: Paragraphs in Fixed-Width Columns
Uses `tabularx` with `X` columns and paragraph justification:
```latex
\begin{tabularx}{\textwidth}{|>{\raggedright\arraybackslash}X|}
```

### Q12: Professional Booktabs Table
Clean table without vertical lines:
```latex
\toprule
Header & Header \\
\midrule
Data & Data \\
\bottomrule
```

### Q13: Nested Table in a Cell
Places complete `tabular` environment inside another table cell.

### Q14: Mathematical Expressions in a Table
Uses `\displaystyle` for proper math rendering in cells:
```latex
$\displaystyle L=\frac{1}{n}\sum_{i=1}^{n}(y_i-\hat y_i)^2$
```

## Color Definitions

```latex
\definecolor{headerblue}{HTML}{244F87}
\definecolor{lightblue}{HTML}{DCEBFA}
\definecolor{lightgreen}{HTML}{DDF3DF}
\definecolor{lightyellow}{HTML}{FFF3BF}
\definecolor{lightred}{HTML}{F8DADA}
```

## Custom Macro for Conditional Coloring

```latex
\newcommand{\markcell}[1]{%
  \ifnum#1>89
    \cellcolor{lightgreen}#1%
  \else
    \ifnum#1>74
      \cellcolor{lightyellow}#1%
    \else
      \cellcolor{lightred}#1%
    \fi
  \fi
}
```

## Common Errors and Solutions

### Error: "Undefined control sequence \multirow"
**Solution**: Add `\usepackage{multirow}`

### Error: "Undefined control sequence \rowcolor"
**Solution**: Add `\usepackage[table]{xcolor}` or `\usepackage{colortbl}`

### Error: "Extra alignment tab has been changed to \cr"
**Solution**: Check column count - too many `&` in a row

### Error: "Missing \endgroup inserted"
**Solution**: Check that `\begin{tabular}` has matching `\end{tabular}`

### Table too wide for page
**Solution**: 
- Reduce font size with `\small` or `\footnotesize`
- Use `\resizebox{\textwidth}{!}{...}`
- Reduce column widths
- Rotate table with `rotating` package

### Misaligned multirow cells
**Solution**: Ensure row count is correct and cells below multirow are empty or contain only `&`

### Colors not showing
**Solution**: 
- Check `[table]` option for xcolor
- Ensure `\usepackage{colortbl}` is loaded
- Verify color definitions are in preamble

## Best Practices

### Table Design
1. **Avoid excessive borders**: Use booktabs for cleaner look
2. **Align numbers right**: Use `r` for numeric columns
3. **Align text left**: Use `l` for text columns
4. **Use color sparingly**: Too much color is distracting
5. **Caption above**: Place `\caption{}` before `\tabular`

### Code Organization
1. **Add comments**: Label each question clearly
2. **Consistent spacing**: Use blank lines between questions
3. **Indent table rows**: Makes code more readable
4. **Define colors early**: All `\definecolor` in preamble
5. **Test incrementally**: Compile after each question

### Professional Tables
- **No vertical lines** in booktabs
- **Sufficient spacing** between rows
- **Clear headers** with bold or color
- **Consistent formatting** across similar tables
- **Meaningful captions** that describe content

## Tips for Complex Tables

### Building Complex Tables
Start simple and add features:
1. Create basic structure with dummy data
2. Add borders and spacing
3. Add multicolumn/multirow
4. Add colors
5. Add mathematical content
6. Fine-tune spacing and alignment

### Debugging Table Issues
1. **Comment out content**: Narrow down problematic rows
2. **Check & count**: Count `&` vs column specifications
3. **Verify braces**: Every `{` must have matching `}`
4. **Test colors separately**: Comment out `\rowcolor` to isolate issues
5. **Simplify**: Remove complexity until it compiles

## Related Course Materials

- L-Tables.pdf - Table formatting lecture
- latex-Environments.pdf - Environment details
- Topic Notes: `02_LaTeX/08_Tables/`
- Topic Notes: `02_LaTeX/09_Colors/`
- Reference: `08_Reference_Cheatsheets/Table_Commands.md`

## Learning Outcomes

After completing this assignment, you should be able to:
- Use overbrace and underbrace for mathematical annotations
- Create arrays with custom separators
- Write piecewise functions with cases
- Build tables with multirow and multicolumn
- Apply colors to rows and cells
- Implement conditional formatting
- Create professional booktabs tables
- Nest tables within tables
- Include complex math expressions in table cells
- Choose appropriate table packages for different needs

## Extension Ideas

1. Create a table with alternating row colors automatically
2. Implement a grade calculator macro that assigns letter grades
3. Design a calendar using table environment
4. Create a truth table for logical operations
5. Build a multiplication table with colored diagonal
