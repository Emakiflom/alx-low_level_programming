# 0x17. C - Doubly Linked Lists

## Overview

This project involves working with doubly linked lists in the C programming language. The main goals are to understand the concept of doubly linked lists, implement various operations such as deletion and insertion, and adhere to coding standards.

## Learning Objectives

By the end of this project, you should be able to:

- Explain what a doubly linked list is.
- Use doubly linked lists in C.
- Implement various operations on doubly linked lists, including deletion and insertion.
- Learn to look for the right sources of information independently.

## Requirements

### General

- **Allowed editors:** vi, vim, emacs
- **Interpreted/compiled on:** Ubuntu 20.04 LTS using python3 (version 3.8.5)
- **Code style:** Betty style (checked using betty-style.pl and betty-doc.pl)
- **No global variables allowed**
- **No more than 5 functions per file**
- **Allowed C standard library functions:** malloc, free, printf, and exit
- **Header file:** Prototypes of all functions should be included in a header file named lists.h
- **Header file:** Should be include guarded

### Data Structure

Please use the following data structure for this project:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

