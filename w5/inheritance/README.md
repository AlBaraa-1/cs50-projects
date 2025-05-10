# 🧬 Inheritance – CS50x Problem Set 5

This is my solution to the **Inheritance** simulation problem from [CS50x 2024 – Week 5](https://cs50.harvard.edu/x/2024/psets/5/inheritance/).

---

## 📝 Problem Description

This program simulates the **genetic inheritance of blood type** across multiple generations.  
It creates a family tree of people, each with two **parents** and two **alleles** representing blood type (A, B, O).

---

## 🧠 How It Works

- The program builds a recursive **family tree** of a specified number of generations.
- Each `person` struct stores:
  - Two parent pointers (`person *`)
  - Two alleles (`char` values: 'A', 'B', or 'O')
- The first generation is assigned **random alleles**.
- The following generations inherit one random allele from each parent.
- The tree is printed from child to great-grandparents.

---

## 🔧 Example Output

```
Child (Generation 0): blood type BO
    Parent (Generation 1): blood type AB
        Grandparent (Generation 2): blood type AA
        Grandparent (Generation 2): blood type BO
    Parent (Generation 1): blood type AO
        Grandparent (Generation 2): blood type AO
        Grandparent (Generation 2): blood type AB
```

---

## 🚀 How to Compile and Run

```bash
make inheritance
./inheritance
```

---

## 🔍 Concepts Practiced

- Recursion
- Structs with pointers to same type (self-referencing)
- Dynamic memory allocation (`malloc`, `free`)
- Random number generation and seeding (`rand()`, `srand(time(0))`)
- Tree traversal and printing with indentation

---

## 📁 File Breakdown

- `inheritance.c` – Core logic for building and printing the family tree

---

## 📌 Notes

- `GENERATION = 3` creates 7 total people in the family tree.
- Memory is freed recursively using `free_family()`.
- Randomness means output will vary on each run.

---

## 🎓 Credit

Course: [CS50x – Harvard University](https://cs50.harvard.edu/x/)  
Instructor: David J. Malan  
Student: AlBaraa Mohammad AlOlabi
