#include<stdio.h>
int main()
{   
    
    int *ptr=NULL;
   
    int a;
    ptr=&a;
    a=10;
    if(ptr!=NULL)
    {
        printf("Value:%d\n",(void*)*ptr);
    }
    else
    {
        printf("Pointer is Null , deference prevented\n");
    }
}