# 🔤 Scrabble – CS50x Problem Set 2

This is my solution to the **Scrabble** problem from [CS50x 2024 – Week 2](https://cs50.harvard.edu/x/2024/psets/2/scrabble/).

---

## 📝 Problem Description

The program simulates a game of **Scrabble** between two players.  
Each player inputs a word, and the program calculates the score of each word based on Scrabble letter values, then announces the winner.

### Scrabble Points:
Each letter has a point value:

```
A=1, B=3, C=3, D=2, E=1, F=4, G=2, H=4, I=1, J=8, K=5, L=1,
M=3, N=1, O=1, P=3, Q=10, R=1, S=1, T=1, U=1, V=4, W=4, X=8, Y=4, Z=10
```

### Sample Run:

```
player 1: Hello
player 2: World
player 2 wins!
```

---

## 🔧 How It Works

- Each player enters a word.
- The program loops through each letter in the word:
  - If the character is a letter (`A-Z` or `a-z`), its Scrabble value is added to the score.
  - Non-letter characters are ignored.
- The program compares the two scores and prints the result:
  - "player 1 wins!", "player 2 wins!", or "Tie"

---

## 🚀 How to Compile and Run

In CS50 IDE or a terminal with `make`:

```bash
make scrabble
./scrabble
```

---

## 🧠 Concepts Practiced

- Working with arrays
- Character manipulation with `isupper()`, `islower()`
- ASCII arithmetic: converting characters to indices
- Looping through strings
- Basic game logic

---

## 📌 Notes

- This solution assumes correct user input (alphabetic words).
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.
- More info: [Scrabble Problem Link](https://cs50.harvard.edu/x/2024/psets/2/scrabble/)

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
