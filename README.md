<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

---

# 🌀 Sorting Algorithms Project

Welcome to our **Sorting Algorithms** repository! This project is built by a duo of dedicated students 👩‍💻👨‍💻, collaborating through **pair programming** to explore the world of sorting and algorithmic efficiency!

---

## 📚 Background Context

This repository was developed as part of a group project to **understand**, **implement**, and **analyze** sorting algorithms in C.  
We dived deep into algorithmic logic, complexity analysis, and memory management using pure C—without relying on the standard library! 🚫📚

---

## 🔗 Resources

Recommended learning materials:

- 📄 [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)  
- 🧠 [Big O notation](https://en.wikipedia.org/wiki/Big_O_notation)  
- 🎞️ [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)  
- ⚠️ [15 sorting algorithms in 6 minutes (Warning: flashing lights)](https://www.youtube.com/watch?v=kPRA0W1kECg)

---

## 🎯 Learning Objectives

By the end of this project, you should be able to confidently:

✅ Explain **at least 4 different sorting algorithms**  
✅ Understand and apply **Big O notation**  
✅ Select the most **efficient algorithm** based on the input  
✅ Define what a **stable sorting algorithm** is

---

## 🛠️ Requirements

### 💾 General

- Editors allowed: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Compilation flags:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
✅ All files must end with a newline

📝 A README.md at the root is mandatory

🧼 Betty style must be followed (betty-style.pl, betty-doc.pl)

🔒 No global variables

⛔ Max 5 functions per file

❌ No usage of standard library functions like printf, puts, etc.

📁 Code Structure
Function prototypes go into: sort.h

Use include guards in all headers

Files like main.c are just for local testing (not graded)

Lists/arrays with <2 elements don’t need sorting

---

## 🐙 GitHub

There should be **one project repository per group**.  
⚠️ If you clone, fork, or copy a repository with the same name before the **second deadline**, you risk getting a **0% score**.

---

## 📎 More Info

### 📐 Data Structure and Functions

For this project, you are given the following helper functions:

#### 🖨️ `print_array`

```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
---

 📂 **Our files** `print_array.c` and `print_list.c` (containing the `print_array` and `print_list` functions)  
 will be **compiled with your functions** during the correction.

📌 **Please declare the prototypes** of the functions in your `sort.h` header file:

 ```c
 void print_array(const int *array, size_t size);
 void print_list(const listint_t *list);
 ```

 🔁 **Please use the following data structure** for the doubly linked list:

```c
 /**
  * struct listint_s - Doubly linked list node
  *
  * @n: Integer stored in the node
  * @prev: Pointer to the previous element of the list
  * @next: Pointer to the next element of the list
  */
 typedef struct listint_s
 {
    const int n;
    struct listint_s *prev;
     struct listint_s *next;
 } listint_t;
 ```
 > 📝 **Please note:** this format is used for **Quiz and Task** questions.

 ```
 O(1)
 O(n)
 O(n!)
 n square     -> O(n^2)
 log(n)       -> O(log(n))
 n * log(n)   -> O(nlog(n))
 n + k        -> O(n+k)
 …
 ```

 ⚠️ Please use the **short notation** (don’t include constants).  
 For example:
 - `O(nk)` or `O(wn)` ➡️ should be written as `O(n)`

 📄 If an answer is required **within a file**, all your answer files must end with a **newline**.

---

 🧪 **Tests**

 Here’s a quick tip to help you test your sorting algorithms with large sets of random integers:  
 👉 [Random.org](https://www.random.org/integers/)

