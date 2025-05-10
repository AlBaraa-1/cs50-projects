# 📖 Readability – CS50x Problem Set 2

This is my solution to the **Readability** problem from [CS50x 2024 – Week 2](https://cs50.harvard.edu/x/2024/psets/2/readability/).

---

## 📝 Problem Description

The program calculates the **grade level** of a given text using the **Coleman-Liau index**, which is a readability formula.

The index is calculated based on:

- **Letters**: Count of alphabetic characters
- **Words**: Count of words (based on spaces)
- **Sentences**: Count of `.`, `!`, or `?`

---

## 📊 Formula Used

```text
index = 0.0588 * L - 0.296 * S - 15.8
```

Where:
- `L` is the average number of letters per 100 words
- `S` is the average number of sentences per 100 words

---

## 🧠 How It Works

- User inputs a block of text.
- Program:
  - Counts alphabetic letters using `isalpha()`
  - Counts words by detecting space transitions
  - Counts sentences using `.`, `!`, or `?`
- Uses the Coleman-Liau formula to compute the grade level.
- Prints:
  - `Grade X`, or
  - `Before Grade 1`, or
  - `Grade 16+`

---

## 🧪 Example

Input:
```
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
```

Output:
```
Grade 3
```

---

## 🚀 How to Compile and Run

Using CS50 IDE or terminal:

```bash
make readability
./readability
```

---

## 💡 Concepts Practiced

- String manipulation
- Input parsing and character classification (`isalpha`, `isspace`)
- Math operations and rounding
- Modular design using functions
- Implementing a real-world readability formula

---

## 📌 Notes

- This solution follows the CS50x 2024 specification for the Readability problem.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science**.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
