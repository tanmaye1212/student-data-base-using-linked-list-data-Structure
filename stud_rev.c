#include "header.h"

void reverse(sll *ptr)
{
        if(ptr==0)
        {
                printf("no records found \n");
                return;
        }
        sll *t=ptr;
        int i,j,l=countnode(ptr);
        FILE *fp;
        fp=fopen("std-txt","w");
        if(fp==NULL)
        {
                printf("File opening falied \n");
                return;
        }
        for(i=0;i<l;i++)
        {
                t=ptr;
                for(j=0;j<l-i-1;j++)
                        t=t->next;
                fprintf(fp,"%d %s %f \n",t->rollno,t->name,t->marks);

        }
        fclose(fp);
}
