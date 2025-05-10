# 🔊 Volume – CS50x Problem Set 4

This is my solution to the **Volume** problem from [CS50x 2024 – Week 4](https://cs50.harvard.edu/x/2024/psets/4/volume/).

---

## 📝 Problem Description

The program adjusts the **volume** of a `.wav` audio file by multiplying each sample by a user-specified **scaling factor**.

It performs two key operations:

1. **Copies the `.wav` header** (first 44 bytes)
2. **Modifies the audio samples** based on the factor

---

## 🚀 How to Compile and Run

```bash
make volume
./volume input.wav output.wav 1.5
```

### Example:

```
input.wav  → original file  
output.wav → file with volume increased by 1.5x  
```

- To **decrease volume**, use a factor like `0.5`
- To **double volume**, use `2.0`

---

## ⚙️ How It Works

- Reads the `.wav` file header and copies it to the output
- Loops over each 16-bit audio sample (`int16_t`)
- Multiplies each sample by the factor
- Writes the modified sample to the output file

```c
buffer *= factor;
```

---

## 🧠 Concepts Practiced

- Working with binary files in C (`fopen`, `fread`, `fwrite`)
- Data types: `uint8_t`, `int16_t`
- File I/O and buffer manipulation
- WAV file format basics
- Command-line arguments

---

## 📌 Notes

- The program assumes input files are valid `.wav` files.
- Uses a fixed header size of 44 bytes (standard for WAV format).
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
