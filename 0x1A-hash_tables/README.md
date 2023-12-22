# 0x1A. C - Hash tables

This project involves the implementation of hash tables in C, exploring the concepts of hash functions, collision handling, and the use of hash tables. The goal is to gain a deep understanding of hash tables and their applications.

## Learning Objectives

Upon completion of this project, you should be able to explain the following concepts without the need for external assistance:

1. **Hash Function:**
   - What is a hash function?
   - What makes a good hash function?

2. **Hash Table:**
   - What is a hash table?
   - How do hash tables work, and how are they used?

3. **Collision Handling:**
   - What is a collision?
   - What are the main ways of dealing with collisions in the context of a hash table?

4. **Advantages and Drawbacks:**
   - What are the advantages of using hash tables?
   - What are the drawbacks of using hash tables?

5. **Common Use Cases:**
   - What are the most common use cases of hash tables?

## Copyright - Plagiarism

This project requires original solutions for the tasks to meet the specified learning objectives. Copying and pasting someone else's work or publishing any content of this project is strictly prohibited. Any form of plagiarism will result in removal from the program.

## Requirements

### General

- **Allowed Editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- **File Endings:** All files should end with a new line
- **README.md:** A mandatory README.md file at the root of the project folder
- **Coding Style:** Use the Betty style, checked with betty-style.pl and betty-doc.pl
- **Global Variables:** Not allowed
- **Functions per File:** No more than 5 functions per file
- **C Standard Library:** You are allowed to use the C standard library
- **Header File:** Prototypes of all functions should be included in a header file named hash_tables.h
- **Header File Inclusion:** Don't forget to push your header file
- **Header Files Guard:** Include guards for all header files

## Data Structures

Please use the following data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 *        The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 *        Each cell of this array is a pointer to the first node of a linked list,
 *        because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

