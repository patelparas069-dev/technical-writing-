# Mathematical Symbols Cheat Sheet

Quick reference for LaTeX mathematical symbols and notation.

## Math Modes

```latex
$inline math$                     % Inline math
\(inline math\)                   % Inline math (alternative)
\[display math\]                  % Display math (centered)
\begin{equation}                  % Numbered equation
  E = mc^2
\end{equation}
```

## Greek Letters

### Lowercase
```latex
\alpha  \beta  \gamma  \delta  \epsilon  \varepsilon
\zeta  \eta  \theta  \vartheta  \iota  \kappa
\lambda  \mu  \nu  \xi  \pi  \varpi  \rho  \varrho
\sigma  \varsigma  \tau  \upsilon  \phi  \varphi
\chi  \psi  \omega
```

### Uppercase
```latex
\Gamma  \Delta  \Theta  \Lambda  \Xi  \Pi
\Sigma  \Upsilon  \Phi  \Psi  \Omega
```

## Superscripts and Subscripts

```latex
x^2                               % Superscript
x_i                               % Subscript
x^{2n}                            % Multi-character super
x_{ij}                            % Multi-character sub
x_i^2                             % Both
```

## Fractions and Roots

```latex
\frac{a}{b}                       % Fraction
\dfrac{a}{b}                      % Display-style fraction
\tfrac{a}{b}                      % Text-style fraction
\sqrt{x}                          % Square root
\sqrt[n]{x}                       % Nth root
```

## Sums, Products, Integrals

```latex
\sum_{i=1}^{n}                    % Summation
\prod_{i=1}^{n}                   % Product
\int_a^b                          % Integral
\iint                             % Double integral
\iiint                            % Triple integral
\oint                             % Contour integral
\lim_{x\to 0}                     % Limit
```

## Binary Operators

```latex
+  -  \times  \div                % Basic arithmetic
\pm  \mp                          % Plus-minus, minus-plus
\cdot  \ast  \star                % Multiplication symbols
\circ  \bullet                    % Composition, bullet
\oplus  \ominus  \otimes          % Circled operators
\cup  \cap                        % Union, intersection
\vee  \wedge                      % Logical or, and
```

## Relations

```latex
=  \neq  \equiv  \approx          % Equality relations
<  >  \leq  \geq                  % Inequalities
\ll  \gg                          % Much less/greater
\sim  \simeq  \cong               % Similarity
\propto  \parallel  \perp         % Proportional, parallel, perpendicular
\in  \notin  \ni                  % Set membership
\subset  \supset                  % Subset, superset
\subseteq  \supseteq              % Subset or equal
```

## Arrows

```latex
\leftarrow  \rightarrow           % Left, right arrow
\Leftarrow  \Rightarrow           % Double arrows
\leftrightarrow  \Leftrightarrow  % Bidirectional
\uparrow  \downarrow              % Up, down
\mapsto  \to                      % Maps to
\implies  \iff                    % Logical implications
```

## Delimiters

```latex
( )  [ ]  \{ \}                   % Parentheses, brackets, braces
\langle \rangle                   % Angle brackets
\lfloor \rfloor                   % Floor
\lceil \rceil                     % Ceiling
|  \|                             % Vertical bars
\left( ... \right)                % Auto-sized delimiters
\left\{ ... \right.               % One-sided
```

## Functions

```latex
\sin  \cos  \tan                  % Trig functions
\arcsin  \arccos  \arctan         % Inverse trig
\sinh  \cosh  \tanh               % Hyperbolic
\log  \ln  \lg                    % Logarithms
\exp  \det  \dim                  % Exponential, determinant, dimension
\min  \max  \sup  \inf            % Min, max, supremum, infimum
\gcd  \lcm                        % GCD, LCM
```

## Accents

```latex
\hat{a}  \tilde{a}  \bar{a}       % Hat, tilde, bar
\vec{a}  \dot{a}  \ddot{a}        % Vector, dot, double dot
\acute{a}  \grave{a}              % Acute, grave
\breve{a}  \check{a}              % Breve, check
```

## Special Symbols

```latex
\infty                            % Infinity
\partial                          % Partial derivative
\nabla                            % Nabla/gradient
\exists  \forall                  % Existential, universal
\emptyset  \varnothing            % Empty set
\in  \notin                       % Element of
\angle  \triangle                 % Angle, triangle
\ell  \hbar  \imath  \jmath       % Special letters
```

## Number Sets

```latex
\mathbb{N}                        % Natural numbers
\mathbb{Z}                        % Integers
\mathbb{Q}                        % Rationals
\mathbb{R}                        % Reals
\mathbb{C}                        % Complex
```
*Requires `\usepackage{amssymb}`*

## Dots

```latex
\ldots  or ...                    % Low dots (a, ..., z)
\cdots                            % Center dots (1 + ... + n)
\vdots                            % Vertical dots
\ddots                            % Diagonal dots
```

## Spacing in Math

```latex
\,                                % Thin space
\:                                % Medium space
\;                                % Thick space
\!                                % Negative thin space
\quad                             % 1em space
\qquad                            % 2em space
```

## Multi-line Equations

```latex
\begin{align}
  x &= a + b \\
  y &= c + d
\end{align}

\begin{align*}                    % Unnumbered
  x &= a \\
  y &= b
\end{align*}

\begin{gather}                    % Multiple equations, centered
  E = mc^2 \\
  F = ma
\end{gather}
```

## Matrices

```latex
\begin{matrix}                    % Plain
  a & b \\
  c & d
\end{matrix}

\begin{pmatrix}                   % Parentheses ( )
  a & b \\
  c & d
\end{pmatrix}

\begin{bmatrix}                   % Brackets [ ]
  a & b \\
  c & d
\end{bmatrix}

\begin{vmatrix}                   % Vertical bars | |
  a & b \\
  c & d
\end{vmatrix}
```

## Cases (Piecewise Functions)

```latex
f(x) = \begin{cases}
  x^2  & \text{if } x < 0 \\
  x    & \text{if } x \geq 0
\end{cases}
```

## Binomial Coefficients

```latex
\binom{n}{k}                      % Binomial coefficient
{n \choose k}                     % Alternative notation
```

## Overbrace and Underbrace

```latex
\overbrace{a+b+c}^{\text{sum}}
\underbrace{x+y+z}_{\text{total}}
```

## Common Mistakes

❌ `x_ij`        → xᵢⱼ (wrong)  
✅ `x_{ij}`      → xᵢⱼ (correct)

❌ `\frac 1 2`   → Error  
✅ `\frac{1}{2}` → ½ (correct)

❌ `log x`       → logx (wrong spacing)  
✅ `\log x`      → log x (correct)

## Packages Required

```latex
\usepackage{amsmath}              % Most math features
\usepackage{amssymb}              % Additional symbols
\usepackage{mathtools}            % Enhanced math (optional)
```

## Examples

```latex
% Einstein's equation
E = mc^2

% Quadratic formula
x = \frac{-b \pm \sqrt{b^2-4ac}}{2a}

% Integral
\int_0^\infty e^{-x^2} dx = \frac{\sqrt{\pi}}{2}

% Matrix
A = \begin{bmatrix}
  1 & 2 & 3 \\
  4 & 5 & 6
\end{bmatrix}

% Summation
S_n = \sum_{i=1}^{n} i = \frac{n(n+1)}{2}
```

For complete examples, see Assignment 3 (Mathematics).
