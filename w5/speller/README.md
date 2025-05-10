# 📝 Speller – CS50x Problem Set 5

This is my solution to the **Speller** project from [CS50x 2024 – Week 5](https://cs50.harvard.edu/x/2024/psets/5/speller/).

---

## 🧠 Problem Description

The program implements a **spell-checker** that compares all the words in a given text file against a dictionary file.

The goal is to:
- Load a dictionary of words into memory
- Read and check words from a user-provided text
- Identify misspelled words
- Benchmark performance for `load`, `check`, `size`, and `unload`

---

## 🔧 How It Works

1. **Data structure**: Uses a **hash table** with linked lists to store the dictionary words.
2. **Hash function**: Computes an index based on characters of each word.
3. **Checking**: Reads the input file word by word and checks each one against the dictionary.
4. **Timing**: Uses `getrusage()` to measure performance of each major function.

---

## 🚀 How to Compile and Run

```bash
make speller
./speller [dictionary] text.txt
```

If no dictionary is provided, the default is `dictionaries/large`.

### Example:
```bash
./speller dictionaries/small texts/lalaland.txt
```

---

## 📂 File Structure

```
speller.c       # Main logic and benchmarking
dictionary.c    # Dictionary implementation (load, check, hash, unload)
dictionary.h    # Function declarations and constants
Makefile        # Build instructions
```

---

## 📊 Hash Table Design

- **Number of buckets (N):** 26
- Each word is hashed to a bucket using a basic polynomial hash function
- Collision resolution is handled using a **linked list**

---

## 🧠 Concepts Practiced

- Hash tables and hashing techniques
- Pointers and dynamic memory management
- File I/O
- Time benchmarking with `getrusage`
- String manipulation and parsing

---

## 📌 Notes

- Dictionary size is reported with `size()`.
- Misspelled words are printed to the console.
- Program ignores words that contain digits or are too long.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
