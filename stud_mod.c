include "header.h"

void name(sll *ptr)
{
        if(ptr==0)
        {
                printf("No records present \n");
                return;
        }
        int f=0;
        char name[20];
        printf("enter name: \n");
        scanf("%s",name);
        while(ptr)
        {
                if(strcmp(ptr->name,name)==0)
                {
                        f=1;
                        printf("%d %s %f \n",ptr->rollno,ptr->name,ptr->marks);
                }
                ptr=ptr->next;
        }
        if(f==0)
                printf("name not found \n");
}


void rollno(sll *ptr)
{
        if(ptr==0)
        {
                printf("No records present \n");
                return;
        }
        int f=0;
        int rollno;
                printf("enter rollno: \n");
        scanf("%d",&rollno);
        while(ptr)
        {
                if(ptr->rollno==rollno)
                {
                        f=1;
                        printf("%d %s %f \n",ptr->rollno,ptr->name,ptr->marks);
                }
                ptr=ptr->next;
        }
        if(f==0)
                printf("name not found \n");
}


void marks(sll *ptr)
{
        if(ptr==0)
        {
                printf("No records present \n");
                return;
        }
        int f=0;
        float marks;
        printf("enter marks: \n");
        scanf("%f",&marks);
        while(ptr)
        {
                if(ptr->marks==marks)
                {
                        f=1;
                        printf("%d %s %f \n",ptr->rollno,ptr->name,ptr->marks);
                }
                ptr=ptr->next;
        }
        if(f==0)
                printf("name not found \n");
}


