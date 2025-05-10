# 💸 Finance – CS50x Problem Set 9

This is my full solution to the **Finance** project from [CS50x 2024 – Week 9](https://cs50.harvard.edu/x/2024/psets/9/finance/).  
The app simulates a stock trading platform using Flask, Python, SQLite, and HTML templates.

---

## 🧠 Project Overview

The application allows users to:

- ✅ Register and log in securely
- ✅ Get real-time stock quotes using Yahoo Finance API
- ✅ Buy and sell stocks
- ✅ View current portfolio with real-time prices
- ✅ View full transaction history
- ✅ Receive dynamic feedback with flash messages and custom errors

---

## 🧩 Technologies Used

- **Flask** – Python web framework  
- **Jinja2** – For dynamic HTML templating  
- **SQLite** – For database storage  
- **Bootstrap 5** – For styling  
- **Yahoo Finance API** – For live stock data  
- **CS50's SQL library** – For simplified SQL usage  

---

## 📁 File Structure

```
app.py                  # Flask backend logic
helpers.py              # Helper functions (apology, login_required, lookup, usd)
requirements.txt        # Python dependencies
finance.db              # SQLite database

templates/
├── layout.html         # Base HTML layout
├── index.html          # Portfolio page
├── login.html          # Login form
├── register.html       # Registration form
├── quote.html          # Form to request stock quote
├── quoted.html         # Display stock quote
├── buy.html            # Buy stocks
├── sell.html           # Sell stocks
├── history.html        # Transaction history
└── apology.html        # Custom error pages

static/
└── styles.css          # Custom CSS styles
```

---

## 🚀 How to Run Locally

1. Install requirements:
```bash
pip install -r requirements.txt
```

2. Export Flask app and run:
```bash
export FLASK_APP=app.py
flask run
```

3. Visit [http://127.0.0.1:5000](http://127.0.0.1:5000) in your browser.

---

## 🔐 Features in Detail

### 🔑 Authentication
- Secure user login/logout
- Passwords hashed using Werkzeug

### 📈 Portfolio
- Shows live stock prices
- Total portfolio value with cash + stocks

### 💰 Transactions
- Buy/Sell stock shares
- Stock validation and quantity checking
- Flash messages for feedback

### 📜 History
- Full table of all transactions with timestamp

---

## 🌍 API Info

Stock prices are retrieved from:
[YAHOO Finance Download API](https://query1.finance.yahoo.com/v7/finance/download/...)

Lookups are processed using Python’s `requests` and `csv.DictReader`.

---

## 📌 Notes

- Shares can't be fractional
- Cash updates immediately after each transaction
- Errors (like invalid symbol or insufficient funds) handled with `apology.html`

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: **AlBaraa Mohammad AlOlabi**
