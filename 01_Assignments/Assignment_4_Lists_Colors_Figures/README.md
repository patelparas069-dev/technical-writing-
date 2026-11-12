# Assignment 4: Lists, Colors, and Figures

Complete solution covering list environments, color models, table floats, figure insertion, rotation, cropping, and minipages.

## Assignment Overview

**Source**: Assignment 4.pdf  
**Topics**: Lists (itemize, enumerate, description), RGB/HTML colors, table floats, figures, image manipulation, minipages

## Questions Checklist

- [x] Section 1: Lists
  - [x] Itemize (bulleted list)
  - [x] Enumerate (numbered list)
  - [x] Description (definition list)
- [x] Section 2: Tables and Colors
  - [x] Table float with placement options
  - [x] RGB vs HTML color notation
  - [x] Custom color definitions
  - [x] Colored equation
- [x] Section 3: Figures
  - [x] MNIT logo with rotation
  - [x] MNIT building with cropping
  - [x] Two minipages with separate captions

## Files

- `assignment4_solution.tex` - Complete LaTeX solution
- `assets/mnit_logo.png` - MNIT logo (extracted from Assignment 4.pdf)
- `assets/mnit_building.jpg` - MNIT building photo (extracted from Assignment 4.pdf)

## Key Concepts Demonstrated

### List Environments

**itemize** - Bulleted list:
```latex
\begin{itemize}
  \item First point
  \item Second point
\end{itemize}
```

**enumerate** - Numbered list:
```latex
\begin{enumerate}
  \item First item
  \item Second item
\end{enumerate}
```

**description** - Definition list:
```latex
\begin{description}
  \item[Term] Definition of the term
  \item[Another term] Another definition
\end{description}
```

### Colors

**RGB Model** - Integer values 0-255:
```latex
\definecolor{mypurple}{RGB}{200,20,200}
```

**HTML/Hexadecimal** - #RRGGBB notation:
```latex
\definecolor{mypurpleHTML}{HTML}{C814C8}
```

**Color Mixing**:
```latex
\colorlet{myblend}{red!60!yellow}  % 60% red, 40% yellow
```

**Using Colors**:
```latex
\textcolor{blue}{colored text}
\color{red}  % Changes all following text
```

### Table Floats

**Placement Options**:
- `[h]` - Here (approximately)
- `[t]` - Top of page
- `[b]` - Bottom of page
- `[p]` - Separate float page
- `[!]` - Override restrictions
- `[H]` - Exactly here (requires `float` package)

```latex
\begin{table}[p]  % Place on float page
  \centering
  \begin{tabular}{...}
    ...
  \end{tabular}
  \caption{Table caption}
  \label{tab:mylabel}
\end{table}
```

### Figures

**Basic figure insertion**:
```latex
\begin{figure}[htbp]
  \centering
  \includegraphics[width=0.5\textwidth]{image.png}
  \caption{Image caption}
  \label{fig:mylabel}
\end{figure}
```

**Image Options**:
- `width=0.5\textwidth` - 50% of text width
- `height=4cm` - Fixed height
- `scale=0.8` - 80% of original size
- `angle=90` - Rotate 90 degrees
- `keepaspectratio=true` - Maintain aspect ratio

### Image Cropping

**trim** option - Crop edges:
```latex
\includegraphics[trim=left bottom right top, clip]{image.jpg}
```

Order: left, bottom, right, top (in points or other units)

Example:
```latex
\includegraphics[width=\textwidth, trim=0 0 0 65pt, clip]{building.jpg}
```
This crops 65pt from the top.

### Minipages

Create side-by-side content:
```latex
\begin{minipage}[t]{0.48\textwidth}
  \centering
  \includegraphics[width=\linewidth]{image1.png}
  \caption{First image}
\end{minipage}\hfill
\begin{minipage}[t]{0.48\textwidth}
  \centering
  \includegraphics[width=\linewidth]{image2.jpg}
  \caption{Second image}
\end{minipage}
```

**Note**: For separate captions in minipages, use `\captionof{figure}{...}` from the `caption` package.

## Packages Used

```latex
\usepackage[margin=1in]{geometry}  % Page margins
\usepackage{graphicx}              % Image inclusion
\usepackage[table]{xcolor}         % Colors
\usepackage{array}                 % Enhanced arrays
\usepackage{float}                 % [H] placement option (optional)
\usepackage{caption}               % \captionof for minipages (optional)
```

## Image Assets

### Extraction from PDF

The MNIT logo and building images are embedded in Assignment 4.pdf. Extract them using:

```bash
# Inspect images in the PDF
pdfimages -list "Assignment 4.pdf"

# Extract all images
pdfimages -all "Assignment 4.pdf" extracted_asset

# Results:
# extracted_asset-000.png (MNIT logo, 221×220 pixels)
# extracted_asset-001.jpg (MNIT building, 2000×975 pixels)
```

**Alternative extraction methods**:
- Use PDF editing software (Adobe Acrobat, Preview on macOS)
- Use ImageMagick: `convert -density 300 file.pdf[page] output.png`
- Use Python: `pdfplumber` or `PyPDF2` libraries

### Placeholder Notice

If the actual PDF is not available, placeholder images should:
1. **mnit_logo.png**: Circular institutional logo, approximately 220×220 pixels
2. **mnit_building.jpg**: Wide building photograph, approximately 2000×1000 pixels

Copy extracted images to:
- `00_Source_Material/extracted_assets/`
- `01_Assignments/Assignment_4_Lists_Colors_Figures/assets/`

## Compilation Instructions

```bash
pdflatex assignment4_solution.tex
pdflatex assignment4_solution.tex
```

Two compilations ensure proper float positioning and cross-references.

## Color Theory

### RGB to Hexadecimal Conversion

RGB(200, 20, 200) → #C814C8

Conversion:
- Red: 200 ÷ 16 = 12 remainder 8 → C8
- Green: 20 ÷ 16 = 1 remainder 4 → 14
- Blue: 200 ÷ 16 = 12 remainder 8 → C8

Or use calculator: 
- 200 = 0xC8
- 20 = 0x14
- 200 = 0xC8

### Color Models in xcolor

- **RGB**: `{RGB}{r,g,b}` with 0-255 range
- **rgb**: `{rgb}{r,g,b}` with 0-1 range (normalized)
- **HTML**: `{HTML}{RRGGBB}` hexadecimal
- **gray**: `{gray}{value}` with 0-1 range
- **named**: Predefined colors (red, blue, green, etc.)

### Color Mixing

```latex
\colorlet{orange}{red!50!yellow}    % 50% red, 50% yellow
\colorlet{pink}{red!30}             % 30% red, 70% white
\colorlet{darkred}{red!50!black}    % 50% red, 50% black
```

## Table Features Demonstrated

### Fixed-Width Columns

```latex
>{\raggedright\arraybackslash}p{2.5cm}
```

Components:
- `p{2.5cm}` - Paragraph column, 2.5cm wide
- `>{\raggedright\arraybackslash}` - Left-aligned, proper line breaking
- `\arraybackslash` - Fixes `\\` for row endings

### Row Coloring

```latex
\rowcolor{green}  % Color entire row
```

### Array Stretch

```latex
\renewcommand{\arraystretch}{1.2}  % 120% row height
```

## Image Manipulation Tips

### Rotation

```latex
\includegraphics[angle=90]{image.png}     % Rotate 90° counterclockwise
\includegraphics[angle=-45]{image.png}    % Rotate 45° clockwise
```

**Note**: The assignment requests `angle=0` for the logo (no rotation).

### Cropping

**Visual approach**: Open image in editor, measure pixels to crop, convert to points (1pt ≈ 1.33 pixels at 72dpi).

**Trial and error**: Start with estimate, compile, adjust.

Example adjustments:
```latex
trim=0 0 0 50pt    % Crop 50pt from top
trim=10 20 30 40   % Crop: 10 left, 20 bottom, 30 right, 40 top
```

### Aspect Ratio

Always use `keepaspectratio=true` when specifying both width and height:
```latex
\includegraphics[width=5cm, height=3cm, keepaspectratio=true]{image.jpg}
```

## Float Placement Behavior

LaTeX float placement is **preference-based**, not absolute:
- `[h]` tries here, but may move if not enough space
- `[t]` tries top of current or next page
- `[p]` places on a dedicated float page
- `[!]` relaxes size restrictions

**Best practice**: Use `[htbp]` and let LaTeX decide, or use `[H]` from `float` package for exact placement.

## Common Errors and Solutions

### Error: "File `image.png' not found"
**Solution**: 
- Check file path relative to .tex file
- Ensure file exists in specified location
- Check file extension case sensitivity (Linux/macOS)

### Error: "Unknown graphics extension: .jpg"
**Solution**: 
- Use `\usepackage{graphicx}`, not `\usepackage{graphics}`
- Compile with pdflatex, not plain latex

### Warning: "Float too large for page"
**Solution**: 
- Reduce image size
- Use `[p]` placement for large floats
- Split into multiple smaller figures

### Image appears rotated incorrectly
**Solution**: 
- Check EXIF orientation data
- Pre-process image to correct orientation
- Adjust `angle` parameter

### Minipage captions not working
**Solution**: 
- Use `\captionof{figure}{...}` instead of `\caption{...}`
- Add `\usepackage{caption}` to preamble

### Trim values seem wrong
**Solution**: 
- Remember order: left, bottom, right, top
- Use positive values
- Units default to points; can use `mm`, `cm`, `in`

## Best Practices

### File Organization
- Keep images in separate `assets/` folder
- Use descriptive filenames
- Include image sources in comments

### Image Formats
- **PNG**: Logos, diagrams, text (lossless)
- **JPG**: Photographs (lossy, smaller files)
- **PDF**: Vector graphics (scalable)
- **EPS**: Legacy vector format

### File Sizes
- Optimize images before including
- Use appropriate resolution (300 DPI for print, 72-150 DPI for screen)
- Don't include unnecessarily large images

### Captions
- Be descriptive
- Explain what the image shows
- Include source if applicable

## Related Course Materials

- L-Color-Figure-Picture.pdf - Colors and figures lecture
- latex-figure-help.pdf - Figure placement guide
- Topic Notes: `02_LaTeX/09_Colors/`
- Topic Notes: `02_LaTeX/10_Figures_Images_and_Floats/`
- Reference: `08_Reference_Cheatsheets/Figure_Commands.md`

## Learning Outcomes

After completing this assignment, you should be able to:
- Create three types of lists with appropriate styling
- Define and use custom colors with RGB and HTML notation
- Create and position table floats
- Insert images with proper sizing
- Rotate and crop images
- Create side-by-side layouts with minipages
- Understand float placement behavior
- Work with different color models
- Extract images from PDF files

## Extension Ideas

1. Create nested lists (list within a list)
2. Define a color gradient using multiple mixed colors
3. Create a figure with subfigures using `subcaption` package
4. Make a gallery with multiple images in a grid
5. Add page borders using `fancybox` package with colors
