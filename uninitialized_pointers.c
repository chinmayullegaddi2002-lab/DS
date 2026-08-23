#include<stdio.h>
int main()
{
    int *ptr;
    printf("The address of pointer:%p",(void*)ptr);
    int a=100;
    *ptr=&a;
    printf("now the address of ponter:%p",(void*)&ptr);
    return 0;
}