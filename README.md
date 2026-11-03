####  Student Record Management System in C  ####


📌 Project Overview
The **Student Record Management System** is a menu-driven application developed using C programming. It manages student records using a **Singly Linked List** and demonstrates dynamic memory allocation, modular programming, searching, sorting, and file handling.

The application allows users to add, delete, display, modify, sort, save, and reverse student records.


✨ Features
- **Add Student:** Add new student records with automatically assigned unique roll numbers.
- **Delete Student:** Delete records using roll number or student name.
- **Display Records:** View all student records in tabular format.
- **Modify Student:** Update student details using roll number, name, or percentage.
- **Sort Records:** Sort students alphabetically by name or by percentage in descending order.
- **File Handling:** Save and load student records using `student.dat`.
- **Reverse List:** Reverse the singly linked list.
- **Delete All:** Delete all student records and release allocated memory.
- **Input Validation:** Validate student names, roll numbers, and percentages.


🛠️ Technologies Used
- Programming Language: C
- Data Structure: Singly Linked List
- Memory Management: `malloc()` and `free()`
- File Handling: C File I/O
- Compiler: GCC


📂 Project Structure
```text
Student-Record-Management-System/
│
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_show.c
├── stud_mod.c
├── stud_save.c
├── student.h
└── README.md
```


⚙️ Compilation

Make sure GCC is installed on your system.

Compile the source files using:

```bash
gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c -o student
```


▶️ Execution

On Linux:

```bash
./student
```

On Windows:

```bash
student.exe
```


📋 Main Menu

| Option | Function |
|---|---|
| A/a | Add a new student record |
| D/d | Delete a student record |
| S/s | Display student records |
| M/m | Modify a student record |
| V/v | Save records |
| T/t | Sort records |
| L/l | Delete all records |
| R/r | Reverse the list |
| E/e | Exit the application |


📚 Concepts Implemented
- Structures and pointers
- Singly linked list operations
- Dynamic memory allocation
- Modular programming
- Searching and sorting algorithms
- File handling
- Memory management


🎯 Objective
To develop a modular student record management application while gaining practical experience in C programming, linked lists, pointers, dynamic memory allocation, and file operations.


Project Type: Mini Project – II
Domain: C Programming / Data Structures

**Project Type:** Mini Project – II  
**Domain:** C Programming / Data Structures
