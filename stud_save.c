#include "header.h"

void stud_save(sll *ptr)
{
        if(ptr==0)
        {
                printf("No records found \n");
                return;
        }
        FILE *fp;
        fp=fopen("std-txt","w");
        while(ptr)
        {
                fprintf(fp,"%d %s %f \n",ptr->rollno,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
        fclose(fp);
}
