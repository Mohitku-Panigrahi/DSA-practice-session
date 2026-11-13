# DSA Practice Session

This repository contains my daily practice work from Data Structures and Algorithms classes. It is a growing collection of C++ programs, revision exercises, exam-preparation questions, and reference material.

The code is intentionally organized by practice area rather than as one single application. Some files are simple experiments, while others are complete implementations of common data structures and algorithms.

## What is covered

- C++ fundamentals: conditions, loops, patterns, functions, strings, and basic programs
- Arrays and array manipulation
- Searching and sorting
- Recursion and problem solving
- Singly, doubly, circular, and grounded-header linked lists
- Stacks and queues
- Hashing
- Trees and tree traversal
- Graph-related practice
- Classic problems such as Tower of Hanoi and palindrome checking
- CSE205 exam and revision questions

## Repository structure

| Directory or file | Description |
| --- | --- |
| [`Apna/`](./Apna/) | Basic C++ practice, conditions, loops, patterns, palindrome, and introductory programs |
| [`csRevision/`](./csRevision/) | Revision programs, including array practice |
| [`cse 205/`](./cse%20205/) | Main CSE205 practice: linked lists, stacks, queues, recursion, hashing, trees, and graphs |
| [`important questions/`](./important%20questions/) | Organized exam questions and solutions for arrays, searching, sorting, and linked lists |
| [`revision/`](./revision/) | Additional revision questions |
| [`stack/`](./stack/) | Stack implementation and stack-based questions |
| [`*.cpp`](./) | Small standalone experiments and general C++ practice |
| [`important questions/README.md`](./important%20questions/README.md) | Detailed guide to the important-question solution bank |

## Important-question solution bank

The [`important questions/`](./important%20questions/) directory contains step-by-step Markdown solutions grouped by topic:

- Arrays, searching, and sorting
- Singly linked lists
- Grounded-header linked lists
- Circular linked lists
- Doubly linked lists

Each problem file focuses on one operation or question and can be used for revision before practicals and examinations.

## How to run a C++ program

The programs are standalone C++ source files. Compile a file with a C++ compiler such as `g++`:

```bash
g++ path/to/program.cpp -o program
./program
```

For example:

```bash
g++ "cse 205/linkedlist.cpp" -o linkedlist
./linkedlist
```

On Windows, the executable can be run with:

```powershell
.\program.exe
```

Some compiled `.exe` files are already present in the repository as local practice artifacts. Recompiling the `.cpp` source is recommended when running the programs on another system.

## Suggested practice workflow

1. Choose a topic or class exercise.
2. Read the corresponding source file or question statement.
3. Compile and run the program with different inputs.
4. Trace the data structure operations by hand.
5. Improve the solution and record new practice in the appropriate directory.

## Learning goal

The purpose of this repository is to build strong fundamentals through consistent practice. It serves as a personal record of daily progress and a quick revision reference for CSE205 and other DSA coursework.

