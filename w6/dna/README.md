# 🧬 DNA – CS50x Problem Set 6

This is my solution to the **DNA** problem from [CS50x 2024 – Week 6](https://cs50.harvard.edu/x/2024/psets/6/dna/).

---

## 📝 Problem Description

The program identifies a person based on their DNA sequence by comparing Short Tandem Repeats (STRs) found in a text file to a DNA database (CSV).

---

## 🧠 How It Works

1. Takes **two command-line arguments**:
   - A **CSV file** (DNA database)
   - A **text file** (DNA sequence)

2. Extracts all STRs from the CSV header.

3. Finds the **longest consecutive run** of each STR in the DNA sequence using a custom function.

4. Compares the STR counts to each person’s profile in the database.

5. If a match is found, prints the person's name. Otherwise, prints `No match`.

---

## 📂 Example Files

**`data.csv`**
```
name,AGAT,AATG,TATC
Alice,2,8,3
Bob,4,1,5
Charlie,3,2,5
```

**`sequence.txt`**
```
AAAGATAGATAGATAATGAATGAATGTATCTATC
```

---

## 🧪 Example Usage

```bash
python dna.py data.csv sequence.txt
```

Output:
```
Alice
```

---

## 📦 File Structure

- `dna.py` – Main program logic
- `data.csv` – Sample database (can be small or large)
- `sequence.txt` – DNA sequence to analyze

---

## 🧠 Concepts Practiced

- File I/O with CSV and TXT files
- Dictionaries and lists
- Custom string matching algorithm
- Command-line argument handling
- STR pattern analysis and comparison logic

---

## 📌 Notes

- STR matching is **exact** (must match counts exactly).
- The program uses both `csv.DictReader` and `string slicing`.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
