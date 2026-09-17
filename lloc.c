#include<stdio.h>
#include<stdlib.h>
int *allocUsingMalloc(int n);
int *allocUsingCalloc(int n);
int *resizeArray( int *arr,int newsize);
void readElements(int *arr,int start,int end);
void printArray(int *arr,int n);
void freeMemory(int *arr);
int main()
{
    int n, new_n;
    int *mallocArray;
    int *callocArray;
    int *resizedArray;
    printf("Enter array size:\n");
    if(scanf("%d",&n)!=1 && n <=0)
    {
        printf("invalid Array size\n");
        return 1;
    }
    mallocArray=allocUsingMalloc(n);
    if(mallocArray==NULL)
    {
        printf("Memory alloction Failed\n");
        return 1;
    }
    printf("Memory allocation Sucessful\n");
    printf("Enter %d elements for the malloc array:\n",n);
    readElements(mallocArray,0,n);
    printf("Malloc Array after user input:\n");
    printArray(mallocArray,n);

    callocArray=allocUsingCalloc(n);
    if(callocArray==NULL)
    {
    printf("Memory alllocation failed \n");
    freeMemory(mallocArray);
    return 1;
    }
    printf("\nArray allocated Using calloc (zero-intialiesd):\n");
    printArray(callocArray,n);

    printf("Enter %d elements for the Calloc Array :\n",n);
    readElements(callocArray,0,n);
    printf("Calloc Array After user input :\n");
    printArray(callocArray,n);

    printf("Enter the New Size for relloc:\n");
    if(scanf("%d",&new_n)!=1 && new_n<=0)
    {
        printf("invalid New size\n");
        freeMemory(mallocArray);
        freeMemory(callocArray);
        return 1;
    }
    resizedArray=resizeArray(mallocArray,new_n);
    if(resizedArray==NULL)
    {
        printf("Memory Allocation failed\n");
        freeMemory(mallocArray);
        freeMemory(callocArray);
        return 1;
    }
    mallocArray=resizedArray;
    if(new_n>n)
    {
        printf("Enter %d additiol Elements:\n");
        readElements(mallocArray,n,new_n);
        printf("\n");
    }
    printf("Array after realloc:\n");
    printArray(mallocArray,new_n);
    freeMemory(mallocArray);
    freeMemory(callocArray);
    printf("Memory successfuly relesed using free()\n");
    return 0;
}
int *allocUsingMalloc(int n)
{
    return malloc(n*sizeof(int));
}
int *allocUsingCalloc(int n)
{
    return calloc(n,sizeof(int));
}
int *resizeArray(int *arr,int newSize)
{
    return realloc(arr,newSize*sizeof(int));
}
void readElements(int *arr ,int start,int end)
{
    for(int i=start;i<end;i++)
    {
        if(scanf("%d",&arr[i]));
    }
}
void printArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
        {
            printf(" ");
        }
        printf("\n");
    }
}
void freeMemory(int *arr)
{
    free(arr);
}