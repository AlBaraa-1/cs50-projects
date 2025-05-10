# 🔐 Caesar – CS50x Problem Set 2

This is my solution to the **Caesar Cipher** problem from [CS50x 2024 – Week 2](https://cs50.harvard.edu/x/2024/psets/2/caesar/).

---

## 📝 Problem Description

The program encrypts messages using the **Caesar cipher**, a simple encryption technique where each letter in the plaintext is shifted by a fixed number of positions (the "key").

The user provides the key as a **command-line argument** and then enters the plaintext to be encrypted.

---

## 🔧 How It Works

- The program accepts **one numeric argument**: the key (must be a positive integer).
- Validates the key using a helper function `only_digits()`.
- Prompts the user for plaintext.
- Shifts each alphabetical character by the key value:
  - Wraps around the alphabet (A→Z, z→a)
  - Keeps the original case (uppercase or lowercase)
  - Non-alphabetic characters are unchanged

---

## 🔐 Example

```bash
$ ./caesar 2
plaintext: hello
ciphertext: jgnnq
```

```bash
$ ./caesar 5
plaintext: World!
ciphertext: Btwqi!
```

---

## 🚀 How to Compile and Run

```bash
make caesar
./caesar 3
```

---

## 🧠 Concepts Practiced

- Command-line arguments (`argc`, `argv`)
- ASCII manipulation and wrapping using modulus (`%`)
- Character checks (`isalpha`, `isupper`, `islower`)
- Functions and input validation
- Classic cryptography

---

## 📌 Notes

- This solution follows the **specifications provided by CS50x**.
- Completed as part of **Harvard's CS50x – Introduction to Computer Science (2024)**.
- More info: [Caesar Problem Link](https://cs50.harvard.edu/x/2024/psets/2/caesar/)

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
