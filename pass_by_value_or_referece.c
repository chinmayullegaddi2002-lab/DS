#include<stdio.h>
void change_value_by_value(int a)
{
    a=100;
}
void change_value_by_pointer(int *p)
{
    *p=100;
}
int main()
{
    int x=10;
    change_value_by_value(x);
    printf("After change value by value:%d\n",x);

    change_value_by_pointer(&x);
    printf("After change value by Pointer:%d\n",x);
    return 0;
}