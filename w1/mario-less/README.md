# 🧱 Mario (Less Comfortable) – CS50x Problem Set 1

This is my solution for the **"Mario: Less Comfortable"** problem from [CS50x 2024 – Week 1](https://cs50.harvard.edu/x/2024/psets/1/mario/less/).

---

## 📝 Problem Description

This program recreates the half-pyramid from the game **Super Mario Bros.**, where the user is prompted to enter the height of the pyramid (from 1 to 8), and the program prints a right-aligned half-pyramid using hashes (`#`).

### Example Output (height = 4):

```
   #
  ##
 ###
####
```

---

## 🔧 How It Works

- The program asks the user for a **height** between 1 and 8.
- Uses a `do-while` loop to **validate input**.
- Then prints the pyramid using **two nested `for` loops**:
  - The first prints the spaces.
  - The second prints the hashes `#`.

---

## 🚀 How to Compile and Run

If you're using the CS50 IDE or a terminal with `make` installed:

```bash
make mario
./mario
```

### Sample Run:

```bash
Height: 4
   #
  ##
 ###
####
```

---

## 🧠 Concepts Practiced

- `do-while` input validation
- `for` loops and nested loops
- Right-aligned formatting
- Basic user input with `get_int()`

---

## 📌 Notes

- This solution follows the **less comfortable** version of the Mario pyramid assignment.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.
- More info: [Problem Link](https://cs50.harvard.edu/x/2024/psets/1/mario/less/)

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
