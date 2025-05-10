# 🖼️ Filter (Less Comfortable) – CS50x Problem Set 4

This is my solution to the **Filter – Less Comfortable** problem from [CS50x 2024 – Week 4](https://cs50.harvard.edu/x/2024/psets/4/filter/less/).

---

## 📝 Problem Description

The program applies one of four image filters to a 24-bit uncompressed BMP file:

- `-g`: Grayscale
- `-s`: Sepia
- `-r`: Reflect horizontally
- `-b`: Blur

---

## ⚙️ How It Works

1. **Command-Line Argument** specifies the filter flag:
   ```bash
   ./filter -g input.bmp output.bmp
   ```
2. The program:
   - Validates the BMP format
   - Loads image data into memory
   - Applies the selected filter using the `helpers.c` functions
   - Writes the modified image back to a new BMP file

---

## 🔧 Filters Explained

| Filter | Description |
|--------|-------------|
| `Grayscale` | Converts each pixel to the average of red, green, and blue values |
| `Sepia`     | Applies sepia-toned transformation with weighted averages |
| `Reflect`   | Flips the image horizontally |
| `Blur`      | Averages each pixel with its neighbors (box blur) |

---

## 🚀 How to Compile and Run

```bash
make filter
./filter -s input.bmp output.bmp  # Apply sepia filter
./filter -b input.bmp output.bmp  # Apply blur filter
```

---

## 🧠 Concepts Practiced

- Image processing with structs and arrays
- Working with BMP file headers
- File I/O (`fread`, `fwrite`, `fseek`)
- Pointer and memory management
- Struct-based pixel manipulation (`RGBTRIPLE`)
- Modular programming with `helpers.c/.h`

---

## 📁 File Structure

```
.
├── filter.c       # Main logic, file handling, and CLI
├── helpers.c      # Image processing functions (grayscale, sepia, etc.)
├── helpers.h      # Function declarations
├── bmp.h          # BMP format structs (RGBTRIPLE, headers)
├── Makefile       # Build rules
```

---

## 📌 Notes

- Supports only 24-bit uncompressed BMP 4.0 files.
- Memory is allocated dynamically to store the image.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
