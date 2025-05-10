# 🎂 Birthdays – CS50x Problem Set 9

This is my solution to the **Birthdays** project from [CS50x 2024 – Week 9](https://cs50.harvard.edu/x/2024/psets/9/birthdays/).

---

## 📝 Project Description

This is a simple web application using **Flask** and **SQLite** that allows users to:

- Submit names and birthdates (month & day)
- View all previously submitted birthdays

The application stores the data in a SQLite database and displays it dynamically using HTML templates.

---

## 📁 File Structure

```
app.py              # Main Flask application
birthdays.db        # SQLite database
templates/
  └── index.html    # Frontend (Jinja + HTML)
static/
  └── styles.css    # Page styling
```

---

## 🚀 How It Works

### On `GET` request:
- Retrieves all birthday entries from the database.
- Renders them inside a table on the main page.

### On `POST` request:
- Reads `name`, `month`, and `day` from the form.
- Inserts the new entry into `birthdays.db`.
- Redirects back to the homepage with updated data.

---

## 🖼️ UI Features

- Clean layout with a centered form and table
- Custom fonts and color palette
- Hover effects for input fields and table rows
- Responsive layout using CSS flexbox-like design

---

## 🧠 Technologies Used

- **Flask** – Python web framework
- **Jinja2** – HTML templating
- **SQLite** – Lightweight relational database
- **HTML/CSS** – Frontend structure and design
- **CS50 Library** – Simplified SQL interaction via `SQL` class

---

## 🧠 Concepts Practiced

- Flask routing and request handling
- POST and GET HTTP methods
- Template rendering with context
- Form data processing
- SQL insert and select operations
- Basic web styling and layout

---

## 🚀 How to Run Locally

1. Install Flask and CS50 library:

```bash
pip install flask cs50
```

2. Run the app:

```bash
flask run
```

3. Open browser and go to:

```
http://127.0.0.1:5000/
```

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: **AlBaraa Mohammad AlOlabi**
