# Image Assets for Assignment 4

This folder contains images extracted from Assignment 4.pdf.

## Required Images

### mnit_logo.png
- **Source**: Assignment 4.pdf (embedded image)
- **Dimensions**: Approximately 221×220 pixels
- **Format**: PNG
- **Description**: Circular MNIT institutional logo

### mnit_building.jpg
- **Source**: Assignment 4.pdf (embedded photograph)
- **Dimensions**: Approximately 2000×975 pixels
- **Format**: JPEG
- **Description**: MNIT building exterior photograph

## Extraction Instructions

If you have the original Assignment 4.pdf file, extract the images using:

```bash
# Navigate to the folder containing Assignment 4.pdf
cd /path/to/pdfs/

# Inspect images in the PDF
pdfimages -list "Assignment 4.pdf"

# Extract all images
pdfimages -all "Assignment 4.pdf" mnit_asset

# This will create files like:
# mnit_asset-000.png (logo)
# mnit_asset-001.jpg (building)

# Rename and move to assets folder
mv mnit_asset-000.png mnit_logo.png
mv mnit_asset-001.jpg mnit_building.jpg
```

## Alternative Methods

### Using ImageMagick
```bash
convert -density 300 "Assignment 4.pdf[page]" output.png
```

### Using macOS Preview
1. Open Assignment 4.pdf in Preview
2. Select image with selection tool
3. Copy image (Cmd+C)
4. File > New from Clipboard
5. Save as PNG or JPG

### Using Adobe Acrobat
1. Open PDF in Acrobat
2. Tools > Export PDF > Image > PNG or JPEG
3. Export all images or select specific ones

## Placeholder Images

If the original PDF is not available and images cannot be extracted:

1. **For compilation testing**: Create placeholder images with ImageMagick:
```bash
convert -size 220x220 xc:gray -gravity center \
  -pointsize 30 -annotate +0+0 "MNIT\nLogo" mnit_logo.png

convert -size 2000x975 xc:lightblue -gravity center \
  -pointsize 50 -annotate +0+0 "MNIT Building" mnit_building.jpg
```

2. **For actual submission**: 
   - Obtain official MNIT logo from institution
   - Use appropriate building photograph
   - Ensure proper licensing/permissions

## Important Notes

- These images must be present for the LaTeX file to compile successfully
- Maintain aspect ratios when resizing
- Original images from Assignment 4.pdf are preferred over substitutes
- Copy these same images to `00_Source_Material/extracted_assets/` for reference

## File Status

⚠️ **PLACEHOLDER STATUS**: These image files need to be added by extracting them from Assignment 4.pdf.

Without these images, compiling assignment4_solution.tex will produce errors.
