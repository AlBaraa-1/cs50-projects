# 🕵️‍♂️ Fiftyville – CS50x Problem Set 7

This is my solution to the **Fiftyville mystery investigation** project from [CS50x 2024 – Week 7](https://cs50.harvard.edu/x/2024/psets/7/fiftyville/).

---

## 📝 Problem Description

This assignment involved investigating a fictional crime using SQL and a large database of clues.  
The database contains:
- Crime reports
- Phone call records
- Flight information
- ATM transactions
- Interview transcripts
- People and vehicles
- Bakery security logs

The goal was to find out:
- **Who committed the crime**
- **Where they escaped to**
- **Who helped them**

---

## 📁 Files Included

```
fiftyville.db       # SQLite database with all information
log.sql             # SQL script containing my investigation queries
answers.txt         # Final answer with criminal, city, and accomplice
schema.txt          # Schema of all database tables
```

---

## 🧠 Final Answers

From my investigation:

- **The THIEF is:** Bruce  
- **The ACCOMPLICE is:** Robin  
- **The city the thief ESCAPED TO:** New York

✅ All answers were verified using data in the database and confirmed via SQL queries.

---

## 🚨 Complexity

> 🧠 **NOTE:**  
This project was one of the **most complicated** in the entire CS50x course.  
It required analyzing multiple tables, combining information from crime scene reports, flight manifests, phone calls, ATM transactions, and interviews.

It truly tested SQL reasoning, JOIN logic, and step-by-step investigative thinking.

---

## 🚀 How to Run

```bash
sqlite3 fiftyville.db
.read log.sql
```

You can also explore interactively in a GUI like [DB Browser for SQLite](https://sqlitebrowser.org/).

---

## 🧠 Skills Practiced

- Advanced SQL JOINs and filtering
- Logical deduction across multiple datasets
- Query optimization and structure
- Relational reasoning
- Working with real-world-like data

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: **AlBaraa Mohammad AlOlabi**
