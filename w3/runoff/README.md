# 🔁 Runoff Voting – CS50x Problem Set 3

This is my solution for the **Runoff Voting** problem from [CS50x 2024 – Week 3](https://cs50.harvard.edu/x/2024/psets/3/runoff/).

---

## 📝 Problem Description

The program simulates a **ranked-choice election** using instant runoff voting, where voters rank candidates by preference.  
If no candidate wins a majority, the candidate with the fewest votes is eliminated and votes are redistributed until a winner is found.

---

## 🧠 How It Works

- Voters rank candidates in order of preference.
- Votes are recorded in a 2D array: `preferences[voter][rank]`.
- The election goes in rounds:
  1. Count first-choice votes for all non-eliminated candidates.
  2. If someone has more than 50%, they win.
  3. Otherwise, eliminate the candidate(s) with the fewest votes.
  4. Repeat until a winner is found or there's a tie.

---

## 🚀 How to Compile and Run

```bash
make runoff
./runoff Alice Bob Charlie
```

Input:
```
Number of voters: 3
Rank 1: Alice
Rank 2: Charlie
Rank 3: Bob
...
```

Output:
```
Charlie
```

---

## 🔍 Concepts Practiced

- Nested arrays and 2D data structures
- Structs with multiple fields (`name`, `votes`, `eliminated`)
- Elimination-based loops
- Tie checking and dynamic winner logic
- Complex conditional logic

---

## 📌 Notes

- Supports up to 100 voters and 9 candidates.
- Implements **Instant Runoff Voting** logic.
- Completed as part of Harvard's CS50x 2024.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
