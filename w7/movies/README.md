# 🗃️ SQL Projects – CS50x 2024

This repository contains my solutions to the **SQL-based problem sets** from [CS50x 2024 – Weeks 7 & 8](https://cs50.harvard.edu/x/2024/), including analysis of songs and movies using relational databases.

---

## 📁 Projects Included

| Project | Description |
|--------|-------------|
| 🎧 **Songs** | Analyze musical preferences and moods from a top-100 songs dataset |
| 🎥 **Movies** | Explore a rich movie database to answer complex relational questions |

---

## 🎧 Songs – Week 7

### 📦 Files

```
songs.db
1.sql - 8.sql
answers.txt
```

### 🧠 Summary

This project explores musical features like **energy**, **valence**, and **danceability** to describe a listener’s **audio aura** based on their top 100 songs.

Key SQL tasks:
- Calculate averages
- Find top/bottom ranked tracks
- Use filtering and aggregation (`AVG`, `MAX`, `WHERE`)
- Determine musical mood

### ✅ Final Audio Aura Analysis (answers.txt)

```
Energy:       0.65
Valence:      0.70
Danceability: 0.60

→ Energetic and Happy, with a decent level of danceability.
```

🔎 Suggested Improvements:
- Include play counts
- Analyze mood patterns over time

---

## 🎥 Movies – Week 7

### 📦 Files

```
movies.db
1.sql - 13.sql
```

### 🧠 Summary

This project answers 13 queries about movies, people, genres, and ratings using SQL.

Key SQL topics used:
- `JOIN` between multiple tables (`movies`, `people`, `stars`, etc.)
- Filtering with `WHERE`, `IN`, `LIKE`
- Grouping with `GROUP BY` and filtering with `HAVING`
- Sorting results using `ORDER BY`
- Aggregation with `COUNT`, `AVG`, `MAX`, `MIN`

### 🔍 Sample Questions Answered

- What movies have the highest average ratings?
- Which actors starred in a specific film?
- Which directors have the most highly rated films?
- What are the most common genres?
- What are the top movies per decade?

### 💡 Example Query

```sql
SELECT name
FROM people
JOIN stars ON people.id = stars.person_id
JOIN movies ON stars.movie_id = movies.id
WHERE movies.title = 'Inception';
```

---

## 🚀 How to Run

To test any `.sql` file:

```bash
sqlite3 [database]
.read 1.sql
.read 2.sql
...
```

Or open the `.db` files in **DB Browser for SQLite** and run queries there.

---

## 🧠 Concepts Practiced

- Relational database design
- Writing efficient and accurate SQL queries
- Real-world data analysis (music + film)
- Multi-table JOINs and aggregation
- Pattern matching and logical filtering

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
