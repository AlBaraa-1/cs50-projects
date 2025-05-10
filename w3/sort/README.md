# 📊 Sort – CS50x Problem Set 3

This is my analysis of different sorting algorithms as part of [CS50x 2024 – Week 3](https://cs50.harvard.edu/x/2024/psets/3/sort/).

---

## 📝 Problem Description

The goal of this problem is to **compare the performance** of different sorting algorithms on various types of input data.  
I was provided with files containing:
- Random numbers
- Pre-sorted numbers
- Reversed numbers

Each sorting algorithm was tested on different file sizes (5k, 10k, 50k).

---

## 🔍 Algorithms Identified

| File        | Algorithm Used     | Why? |
|-------------|--------------------|------|
| `sort1`     | Bubble Sort        | It was faster than selection sort on sorted data (O(n)) |
| `sort2`     | Merge Sort         | It was the fastest on all inputs (O(n log n)) |
| `sort3`     | Selection Sort     | It was always O(n²), even on sorted input |

These conclusions were based on execution time observations recorded in `answers.txt`.

---

## 📁 Files Included

- `answers.txt` – my explanations and conclusions
- `random5000.txt`, `random10000.txt`, `random50000.txt`
- `sorted5000.txt`, `sorted10000.txt`, `sorted50000.txt`
- `reversed5000.txt`, `reversed10000.txt`, `reversed50000.txt`

Each file contains integers used to test the performance of the sorting algorithms.

---

## 🚀 How to Run

If you want to test sorting performance:

1. Use `sort1`, `sort2`, or `sort3` executables
2. Provide the desired input file as command-line input
3. Use a timer to compare performance:

Example:
```bash
time ./sort1 random5000.txt
```

---

## 🧠 Concepts Practiced

- Algorithmic complexity (Big O notation)
- Comparative analysis of algorithms
- File input/output
- Performance benchmarking
- Bubble Sort vs. Merge Sort vs. Selection Sort

---

## 📌 Notes

- This assignment focuses on understanding **time complexity** and behavior of sorting under different input scenarios.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
