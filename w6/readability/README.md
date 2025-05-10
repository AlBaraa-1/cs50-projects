# 📖 Readability – CS50x Problem Set 6

This Python program calculates the **grade level** of a given text using the **Coleman-Liau index**.

## 🧠 How It Works

1. Prompts the user for input text
2. Counts:
   - Letters
   - Words
   - Sentences
3. Uses the Coleman-Liau formula to determine the grade level.

## 📊 Formula

```
index = 0.0588 * L - 0.296 * S - 15.8
```

Where:
- `L` = average letters per 100 words  
- `S` = average sentences per 100 words

## 🚀 Run It

```bash
python readability.py
```

### Example:

```
Text: Congratulations! You made it to CS50.
Grade 4
```

## 🧠 Concepts Used

- String analysis
- Functions and modular design
- Loops, conditionals, and math
- Custom text processing

## 🎓 Credit

Course: CS50x – Harvard University  
Student: AlBaraa Mohammad AlOlabi
