#include <stdio.h>
int main()
{
int a, i;

    printf("Enter max number: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
      if (i % 2 != 0){
            printf("%d\t", i);
      }
      else if (i%2==0){
        printf("%d\n",i);
    }
    }
     
    return 0;
}