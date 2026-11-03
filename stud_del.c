#include "header.h"

void stud_del(sll **ptr)
{
        int r;
        if(*ptr==0)
        {
                printf("No records present \n");
                return;
        }
        sll *del=*ptr,*y=*ptr,*prev;

        char name[20];
        printf("Enter name to delete \n");
        scanf("%s",name);
        printf("Enter rollno to delete: \n");
        scanf("%d",&r);
        printf("**************************************************\n");
        while(strcmp(y->name,name)==0)
        {
                printf("rollno and name: %d %s \n",y->rollno,y->name);
                y=y->next;
        }
        while(ptr)
        {
                if(del->rollno==r)
                {
                        if(del==*ptr)
                                *ptr=del->next;
                        else    
                                prev->next=del->next;
                        free(del);
                        return;
                }
                prev=del;
                del=del->next;
        }
        printf("Name not found \n");
}

void delete_all(sll **ptr)
{
        if(*ptr==0)
        {
                printf("no records present \n");
                return;
        }
        int c=1;
        sll *del=*ptr;
        while(del)
        {
                *ptr=del->next;
                printf("node deleted: %d \n",c++);
                sleep(1);
                free(del);
                del=*ptr;
        }
}



