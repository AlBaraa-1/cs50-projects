# 🗳️ Plurality Voting – CS50x Problem Set 3

This is my solution for the **Plurality** voting problem from [CS50x 2024 – Week 3](https://cs50.harvard.edu/x/2024/psets/3/plurality/).

---

## 📝 Problem Description

This program simulates a simple election where the candidate with the most votes wins.

### Features:
- Accepts candidate names via command-line arguments.
- Prompts the user to enter votes.
- Prints the winner(s) of the election.

---

## 🧠 How It Works

- An array of `candidate` structs stores names and vote counts.
- For each voter:
  - The program records the vote if the name is valid.
- After voting ends:
  - The candidate(s) with the highest number of votes are printed.
  - Ties are handled by printing all winners.

---

## 🚀 How to Compile and Run

```bash
make plurality
./plurality Alice Bob Charlie
```

Example input:
```
Number of voters: 3
Vote: Alice
Vote: Bob
Vote: Alice
```

Output:
```
Alice
```

---

## 🔍 Concepts Practiced

- Structs and arrays in C
- String comparison with `strcmp()`
- Simple vote counting logic
- Command-line arguments

---

## 📌 Notes

- Supports up to 9 candidates.
- Completed as part of Harvard's CS50x 2024.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
