# Assignment 3: Mathematical Typesetting

Complete solution for mathematical typesetting in LaTeX, covering inline and display math, fractions, symbols, calculus, multi-line equations, and matrices.

## Assignment Overview

**Source**: Assignment 3.pdf  
**Title**: Assignment 3 - Math, TW Lab 2025  
**Topics**: Mathematical expressions, equations, symbols, matrices

## Questions Checklist

- [x] Section 1: Basics (inline and display math)
- [x] Section 2: Fractions and Roots
- [x] Section 3: Symbols and Math Fonts
- [x] Section 4: Calculus (derivatives, integrals)
- [x] Section 5: Multi-line Equations
  - [x] 5.1: Centering and Alignment
  - [x] 5.2: Multiline Equation
- [x] Section 6: Matrices (various delimiters)

## Files

- `assignment3_math.tex` - Complete LaTeX solution

## Key Concepts Demonstrated

### 1. Inline vs Display Math
- **Inline math**: `\( E=mc^2 \)` or `$E=mc^2$` - Math within text
- **Display math**: `\[ ... \]` or `equation` - Centered on its own line

### 2. Mathematical Elements
- **Superscripts**: `x^2` → x²
- **Subscripts**: `x_i` → xᵢ
- **Fractions**: `\frac{a}{b}` → a/b
- **Square roots**: `\sqrt{x}` → √x
- **Nth roots**: `\sqrt[n]{x}` → ⁿ√x

### 3. Greek Letters
- Lowercase: `\alpha`, `\beta`, `\theta`, `\mu`, `\nu`, `\epsilon`
- Uppercase: `\Gamma`, `\Delta`, `\Lambda`, `\Rightarrow`

### 4. Mathematical Symbols
- **Set membership**: `\in`, `\forall`, `\exists`
- **Relations**: `<`, `>`, `\le`, `\ge`, `=`, `\ne`
- **Logic**: `\Rightarrow`, `\Leftarrow`, `\Leftrightarrow`
- **Number sets**: `\mathbb{R}`, `\mathbb{C}`, `\mathbb{N}`, `\mathbb{Z}`

### 5. Calculus Notation
- **Derivatives**: `\frac{du}{dx}`, `\frac{\partial u}{\partial t}`
- **Integrals**: `\int_a^b f(x)\,dx`
- **Summations**: `\sum_{i=1}^{n} a_i`
- **Products**: `\prod_{i=1}^{n} a_i`

### 6. Multi-line Equations
- **`align`**: Multiple equations with alignment
- **`align*`**: Unnumbered aligned equations
- **Alignment marker**: `&` (typically before `=`)
- **Line break**: `\\`

### 7. Matrices
- `matrix` - No delimiters
- `pmatrix` - Parentheses ( )
- `bmatrix` - Square brackets [ ]
- `vmatrix` - Vertical bars | | (determinant)
- `Bmatrix` - Curly braces { }

### 8. Special Commands
- **Binomial coefficient**: `\binom{n}{k}`
- **Spacing in math**: `\quad`, `\qquad`
- **Spacing in integrals**: `\,` (thin space before dx)

## Packages Used

```latex
\usepackage{amsmath}   % Enhanced math environments
\usepackage{amssymb}   % Additional math symbols
\usepackage{geometry}  % Page margins
```

## Compilation Instructions

```bash
pdflatex assignment3_math.tex
pdflatex assignment3_math.tex
```

Two compilations ensure proper equation numbering and spacing.

## Section-by-Section Breakdown

### Section 1: Basics
Demonstrates the difference between inline math `\(E=m.c^2\)` and display mode `\[v=u+a.t\]`.

### Section 2: Fractions and Roots
Shows nested expressions: `\frac{\sqrt{a^2+b^2 i}}{c_i}`

### Section 3: Symbols and Math Fonts
- Einstein field equations with tensor notation
- Logical quantifiers and set notation
- Binomial distribution formula with summation

### Section 4: Calculus
- Partial derivatives: `\frac{\partial u}{\partial t}`, `\frac{\partial^2u}{\partial x^2}`
- Definite integrals with limits
- Proper spacing before differential element

### Section 5: Multi-line Equations
**Aligned equations** (separately numbered):
```latex
\begin{align}
x &= 5 \\
x+y &= 3
\end{align}
```

**Multiline expansion** (unnumbered):
```latex
\begin{align*}
(x+y+z)^3 &= (x+y+z)(x+y+z)(x+y+z) \\
&= x^3+y^3+z^3 + ...
\end{align*}
```

### Section 6: Matrices
Four matrix types side by side using `\qquad` spacing:
- Plain matrix (no delimiters)
- Bracketed matrix
- Determinant notation
- Parenthesized matrix

## Common Errors and Solutions

### Error: "Undefined control sequence \mathbb"
**Solution**: Add `\usepackage{amssymb}` to preamble

### Error: "Missing $ inserted"
**Solution**: Math commands like `\frac` must be used inside math mode (`$...$` or `\[...\]`)

### Error: "Bad math environment delimiter"
**Solution**: Check that every `\begin{align}` has matching `\end{align}`

### Warning: "Underfull \hbox"
**Solution**: This is usually harmless in display math; LaTeX is reporting spacing decisions

### Alignment issues in `align` environment
**Solution**: Ensure `&` is placed before the alignment point (typically before `=`)

## LaTeX Math Best Practices

1. **Use display mode for important equations**: Makes them stand out and easier to read
2. **Number important equations**: Use `equation` or `align` instead of `\[...\]`
3. **Use `\,` before dx in integrals**: Proper spacing convention
4. **Use `\left` and `\right` for auto-sizing delimiters** (when needed)
5. **Use `align*` for unnumbered multi-line**: Cleaner than multiple `\[...\]` blocks
6. **Use `\qquad` for horizontal spacing**: Better than manual spaces

## Tips for Complex Expressions

### Building Complex Fractions
Start simple and add complexity:
```latex
\frac{a}{b}                    % Simple
\frac{a^2}{b}                  % Add exponent
\frac{a^2 + 1}{b_i}           % Add terms
\frac{\sqrt{a^2+b^2}}{c_i}    % Nest functions
```

### Subscripts and Superscripts
```latex
x_i          % Single character subscript
x_{ij}       % Multi-character subscript (need braces)
x^2          % Single character superscript
x^{2n}       % Multi-character superscript
x_i^2        % Both (subscript first by convention)
```

### Greek Letters Memory Aid
Common Greek letters in physics/math:
- α (alpha), β (beta), γ (gamma), δ (delta)
- ε (epsilon), θ (theta), λ (lambda)
- μ (mu), ν (nu), π (pi), σ (sigma)
- ρ (rho), τ (tau), φ (phi), ψ (psi), ω (omega)

## Related Course Materials

- Lmaths.pdf - Mathematical typesetting lecture
- Topic Notes: `02_LaTeX/06_Mathematics/`
- Topic Notes: `02_LaTeX/07_Equations_Alignment_and_Matrices/`
- Reference: `08_Reference_Cheatsheets/Math_Symbols.md`

## Next Steps

Try extending the assignment:
1. Add equation labels and cross-references
2. Use `\tag{}` to create custom equation numbers
3. Experiment with `gather` and `multline` environments
4. Try `cases` environment for piecewise functions
5. Create larger matrices with `\cdots`, `\vdots`, `\ddots`

## Learning Outcomes

After completing this assignment, you should be able to:
- Write inline and display mathematical expressions
- Use fractions, roots, and nested expressions
- Include Greek letters and mathematical symbols
- Write derivatives and integrals properly
- Create aligned multi-line equations
- Display matrices with various delimiters
- Understand when to use `align` vs `align*`
