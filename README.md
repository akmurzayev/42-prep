# 42 Prep Workspace

This repository contains my personal workspace for preparing for the 42 Piscine and the early stages of the 42 Cursus.  
It is organized, clean, and easy to review later.

---

## 📌 C00 – C07: What I Learned

### C00
- First steps in C  
- Basic functions like `ft_putchar`, `ft_print_numbers`, `ft_is_negative`  
- Compilation basics and norm rules

### C01
- Pointer fundamentals  
- Address, value, references  
- Swap, div/mod, modifying strings via pointers

### C02
- Understanding basic string manipulation  
- `ft_strcpy`, `ft_strncpy`, `ft_str_is_alpha`  
- Character classes and manual string handling

### C03
- Comparison functions  
- `ft_strcmp`, `ft_strncmp`, `ft_strcat`, `ft_strncat`

### C04
- Basic I/O  
- `ft_putstr`, `ft_putnbr`, concept of `atoi`

### C05
- Recursion  
- Factorial, Fibonacci, power functions

### C06
- Program arguments (`argc`, `argv`)  
- Working with parameters

### C07
- Dynamic memory allocation  
- `malloc`, substring, join, split  
- By this point, most core concepts of C become solid.

---

## 📌 What Is libft?

**libft** is a project where you create your own C standard library.  
The goal is to re-implement essential functions from `string.h`, `stdlib.h`, etc.

### What’s inside libft?
- String functions (strlen, strchr, strdup, substr, join, trim…)  
- Memory functions (memset, memcpy, memmove, memchr…)  
- Linked list utilities (bonus part)  
- Helper functions (itoa, split…)

### Why is it important?
- You use your own libft in almost every 42 project.  
- It builds clean coding habits and helps you understand how C works under the hood.

---

## 📌 What Is Rush?

**Rush** is a weekend group project at 42.  

You practice:  
- Teamwork  
- Algorithm design  
- Time management  
- Clean and readable code

Rush00 → usually grid/board problem  
Rush01 → logic/constraint puzzles

---

## 📌 What Is Shell00?

**Shell00** introduces basic Unix commands and file permissions.

You learn:  
- `ls`, `cat`, `chmod`, `touch`, `mkdir`  
- How file permissions work  
- Discipline of working through the terminal

---

## 📌 What Is Francinette?

**Francinette** is an automated test tool for Piscine C projects.  
It helps instantly detect errors and norm issues.

### 🔧 Installation

```bash
git clone https://github.com/xicodomingues/francinette.git
cd francinette
./grademe.sh
