#include "header.h"

int countnode(sll  *ptr)
{
        static int l=0;
        while(ptr)
        {
                l++;
                ptr=ptr->next;
                //ptr=ptr->next;
        }
        return l;
}
