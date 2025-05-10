# 🎬 Movies – CS50x Problem Set 7

This is my solution to the **Movies** problem from [CS50x 2024 – Week 7](https://cs50.harvard.edu/x/2024/psets/7/movies/).

---

## 📝 Problem Description

In this assignment, I explore a relational database of movies using SQL to answer 13 analytical questions.  
The database includes information about:

- Movies
- People (actors, directors)
- Ratings
- Stars
- Genres

Each `.sql` file contains the SQL query needed to answer one specific question.

---

## 📁 File Structure

```
movies.db         # The main SQLite database
1.sql - 13.sql    # Each file contains a query for one question
```

---

## 🧠 Topics Covered

- Relational data modeling
- Many-to-many relationships
- SQL JOIN operations (INNER JOIN, LEFT JOIN)
- Filtering and aggregation:
  - `GROUP BY`, `HAVING`
  - `ORDER BY`, `LIMIT`
  - `COUNT`, `AVG`, `MAX`
- Subqueries and aliases

---

## 🧪 Example Questions Answered

- What are the highest-rated movies of a specific year?
- Who acted in a specific movie?
- What movies did a certain director direct?
- Which movies have the most stars?
- Who starred in movies of a specific genre?

---

## 🚀 How to Run

1. Open your terminal or DB browser.
2. Start SQLite:

```bash
sqlite3 movies.db
```

3. Run queries like this:

```bash
.read 1.sql
.read 2.sql
...
.read 13.sql
```

You can also run queries directly in a GUI tool like [DB Browser for SQLite](https://sqlitebrowser.org/).

---

## 🧠 Example Query Snippet

```sql
SELECT title
FROM movies
JOIN ratings ON movies.id = ratings.movie_id
WHERE year = 2010
ORDER BY rating DESC
LIMIT 5;
```

---

## 📌 Notes

- Database schema was provided by CS50.
- Queries are written for readability and modularity.
- Some questions required advanced logic using nested subqueries or multiple JOINs.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: **AlBaraa Mohammad AlOlabi**
