# 🧠 Recover – CS50x Problem Set 4

This is my solution to the **Recover** problem from [CS50x 2024 – Week 4](https://cs50.harvard.edu/x/2024/psets/4/recover/).

---

## 📝 Problem Description

The program recovers JPEG images from a forensic image (like a raw `.img` dump of an SD card).  
It scans the file block-by-block (512 bytes each) to detect the beginning of each JPEG and saves each one to a separate file.

---

## 🧠 How It Works

- The program reads the input file **512 bytes at a time**.
- JPEG signatures are detected by checking the first 4 bytes of each block:
  ```
  0xff 0xd8 0xff 0xe0 to 0xef
  ```
- Once a JPEG is found:
  - A new file is created (`000.jpg`, `001.jpg`, ...)
  - The block and all subsequent blocks are written to it until a new JPEG is found

---

## 🚀 How to Compile and Run

```bash
make recover
./recover memorycard.raw
```

- Input: `memorycard.raw` (a binary dump of a memory card)
- Output: Files like `000.jpg`, `001.jpg`, ...

---

## 🔍 Sample Signature Check (in code)

```c
if (buffer[0] == 0xff &&
    buffer[1] == 0xd8 &&
    buffer[2] == 0xff &&
    (buffer[3] & 0xf0) == 0xe0)
```

---

## 📂 Example Output Files

```
000.jpg
001.jpg
002.jpg
...
```

Each file is a valid JPEG recovered from the input memory image.

---

## 🧠 Concepts Practiced

- Binary file reading and writing (`fread`, `fwrite`)
- Working with raw memory data
- Buffering, byte manipulation
- File naming and formatting (`sprintf`)
- Forensic data recovery logic

---

## 📌 Notes

- JPEG blocks are 512 bytes aligned in the input file.
- File output stops when end-of-file is reached.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
