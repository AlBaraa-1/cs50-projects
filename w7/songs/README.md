# 🎧 Songs – CS50x Problem Set 7

This is my solution to the **Songs** problem from [CS50x 2024 – Week 7](https://cs50.harvard.edu/x/2024/psets/7/songs/).

---

## 📝 Problem Description

This project involves writing a series of SQL queries to explore and analyze data from `songs.db`, a SQLite database containing information about 100 popular songs from 2018.

The goal is to gain insights into musical trends and listener preferences by answering specific questions using SQL.

---

## 📁 File Structure

```
songs.db         # The main database
1.sql - 8.sql    # SQL queries for the assignment
answers.txt      # Final analysis based on the data
```

---

## 🧠 Topics Covered

- SQL querying using `SELECT`, `WHERE`, `GROUP BY`, `ORDER BY`
- Aggregate functions (`AVG`, `COUNT`, `MAX`, etc.)
- JOINs across multiple tables
- Filtering with conditions on mood features (energy, valence, danceability)

---

## 🧪 Sample Questions Answered

- What is the average energy of the top 100 songs?
- Which artists have the most songs?
- Which songs are the most danceable?
- How would you describe the listener's **audio aura**?

---

## ✨ Final Analysis (`answers.txt`)

Based on average values:

- **Energy**: 0.65  
- **Valence**: 0.70  
- **Danceability**: 0.60  

**Conclusion**:  
The listener's audio aura is described as:

> 🟢 **Energetic and Happy**, with a decent level of danceability.

📌 Suggested improvement:  
Include **play counts** and track **mood trends over time** to understand emotional patterns better.

---

## 🧠 Concepts Practiced

- SQL logic and thinking
- Data interpretation from real-world media
- Writing modular, readable `.sql` scripts
- Analyzing musical mood using structured data

---

## 🚀 How to Run

To test the queries yourself:

```bash
sqlite3 songs.db
.read 1.sql
.read 2.sql
...
```

Or run each query separately inside a DB browser.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
