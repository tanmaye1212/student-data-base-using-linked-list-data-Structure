#include "header.h"

void sort_data(sll *ptr)
{
        if(ptr==0)
        {
                printf("no records present \n");
                return;
        }
        int l=countnode(ptr);
        int i,j;
        sll *p1=ptr,*p2,t;
        for(i=0;i<l-1;i++)
        {
                p1=ptr;
                p2=p1->next;
                for(j=0;j<l-i-1;j++)
                {
                        if(p1->rollno > p2->rollno)
                        {    
                                strcpy(t.name,p1->name);
                                t.marks=p1->marks;

                                p1->rollno=p2->rollno;
                                strcmp(p1->name,p2->name);
                                p1->marks=p2->marks;

                                p2->rollno=t.rollno;
                                strcpy(p2->name,t.name);
                                p2->marks=t.marks;
                        }
                        p1=p2;
                        p2=p2->next;
                }
        }
}
