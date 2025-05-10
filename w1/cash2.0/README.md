# 💰 Cash – CS50x Problem Set 1

This is my solution to the **"Cash"** problem from [CS50x 2024 – Week 1](https://cs50.harvard.edu/x/2024/psets/1/cash/).

---

## 📝 Problem Description

The program calculates the **minimum number of coins** needed to make change for a given amount of cents.  
The available coin denominations are:

- 25¢ (quarters)
- 10¢ (dimes)
- 5¢ (nickels)
- 1¢ (pennies)

### Example:

Input:
```
Change owed: 41
```

Output:
```
Quarters: 1
Dimes: 1
Nickels: 1
Pennies: 1
Total coins: 4
```

---

## 🔧 How It Works

- The user is prompted to enter a non-negative number of cents.
- The program uses a greedy algorithm to calculate:
  - How many quarters fit
  - Then dimes, nickels, and finally pennies
- The result is printed, showing the number of each coin type and the total.

---

## 🚀 How to Compile and Run

If you're using the CS50 IDE or a terminal with `make`:

```bash
make cash
./cash
```

---

## 🧠 Concepts Practiced

- Input validation with `do-while`
- Modular arithmetic and greedy algorithms
- Functions and loops in C
- Problem-solving with real-world simulation

---

## 📌 Notes

- This solution follows the **CS50x specification for the Cash problem**.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.
- More info: [Problem Link](https://cs50.harvard.edu/x/2024/psets/1/cash/)

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
