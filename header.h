#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
 
typedef struct student
{
         int rollno;
         char name[20];
         float marks;
         struct student *next;
}sll;

void stud_add(sll **);
void stud_show(sll *);
void stud_del(sll **);
void name(sll *);
void rollno(sll *);
void marks(sll *);
void stud_save(sll *);
int countnode(sll *);
void delete_all(sll **);
void reverse(sll *);
void sort_data(sll *);
