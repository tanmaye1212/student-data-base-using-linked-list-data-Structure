#include "header.h"

void stud_add(sll **ptr)
{
        sll *new,*last;
        int c=1;
        new=malloc(sizeof(sll));
        printf("Enter name and marks : \n");
        scanf("%s%f",new->name,&new->marks);
        sll *t; 
        if(*ptr==0)
        {
                new->rollno=1;
                new->next= *ptr;
                *ptr=new;
        }
        else
        {
                t=*ptr;
                while(c==t->rollno)
                {
                        c++;
                        if(t->next==0)
                                break;

                        t=t->next;

                }
                new->rollno=c;
                new->next=0;
                if(*ptr==0)
                        *ptr=new;
                else 
                {
                        last= *ptr;
                        while((last->next!=0)&&(new->rollno > last->next->rollno))
                                last=last->next;
                        new->next=last->next;
                        last->next =new;
                }
        }
}

