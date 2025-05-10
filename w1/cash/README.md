# 💰 Cash (Less Comfortable) – CS50x Problem Set 1

This is my solution to the **"Cash – Less Comfortable"** problem from [CS50x 2024 – Week 1](https://cs50.harvard.edu/x/2024/psets/1/cash/).

---

## 📝 Problem Description

The program calculates the **minimum number of coins** needed to give a user change for a given amount of cents.  
It assumes the availability of U.S. coin denominations:

- 25¢ (quarters)
- 10¢ (dimes)
- 5¢ (nickels)
- 1¢ (pennies)

### Sample Input:
```
Enter the number of cents: 41
```

### Output:
```
Quarters: 1
Dimes: 1
Nickels: 1
Pennies: 1
Total coins: 4
```

---

## 🔧 How It Works

- The user is asked for a non-negative number of cents.
- The program uses **division** (`/`) and **modulus** (`%`) operators to:
  - Calculate the number of each coin
  - Subtract the value of used coins from the total
- It then prints the breakdown and total coins used.

---

## 🚀 How to Compile and Run

In the CS50 IDE or your terminal:

```bash
make cash
./cash
```

---

## 🧠 Concepts Practiced

- Input validation using a `do-while` loop
- Arithmetic operations in C (`/` and `%`)
- Breaking down a problem into modular functions
- Greedy algorithm logic

---

## 📌 Notes

- This version uses simple math rather than loops to determine coin counts.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.
- More info: [Problem Link](https://cs50.harvard.edu/x/2024/psets/1/cash/)

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
