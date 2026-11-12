# Extracted Assets

Images extracted from Assignment PDFs for use in solutions.

## Files

### mnit_logo.png
- **Source**: Assignment 4.pdf (embedded image)
- **Dimensions**: 221×220 pixels
- **Format**: PNG
- **Usage**: Assignment 4 solution, demonstrations
- **Extraction Method**: `pdfimages -all "Assignment 4.pdf" prefix`

### mnit_building.jpg
- **Source**: Assignment 4.pdf (embedded photograph)
- **Dimensions**: 2000×975 pixels
- **Format**: JPEG
- **Usage**: Assignment 4 solution with cropping examples
- **Extraction Method**: `pdfimages -all "Assignment 4.pdf" prefix`

## Placeholder Notice

**Note**: If the actual PDF files with embedded images are provided, extract the images using:

```bash
# Inspect images in PDF
pdfimages -list "Assignment 4.pdf"

# Extract all images
pdfimages -all "Assignment 4.pdf" extracted_asset

# This will create files like:
# extracted_asset-000.png (logo)
# extracted_asset-001.jpg (building)
```

For now, these are placeholder files. Students should:
1. Add the actual extracted images here
2. Copy them to `01_Assignments/Assignment_4_Lists_Colors_Figures/assets/`
3. Verify they work in the LaTeX compilation

## Alternative

If PDF image extraction fails, high-quality placeholder images can be created or downloaded, but they must match the assignment requirements (MNIT logo and building).
