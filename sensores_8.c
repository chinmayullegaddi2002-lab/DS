#include<stdio.h>
int search(int code)
{   
    int count=0;
    while(code>0)
    {
        if(code & 1)
        {
            count++;
        }
        code>>=1;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=-1;
    int max_value=-1;
    for(int i=0;i<n;i++)
    {
        int current=search(arr[i]);
        if(current>max)
        {
            max = current;
            max_value=arr[i];
        }
    }
    printf("The number with the maximum set bits is: %d\n", max_value);
    return 0;
}