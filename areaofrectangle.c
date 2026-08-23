#include<stdio.h>
int main()
{
int lenght=4, width=6, area;
area = lenght*width;
printf("%d is the lenght\n\n",lenght);
printf("width is :%d\n\n",width);
printf ("Area of rectangle is:%d\n\n\n\n",area);
/*this is possible because of ASS key*/
char a=65,b=66;
char Name[100]='ChinmaY';
printf("%c , %c",b,a);
// it will only print the last word of the word
printf("\n%c",Name);
double x=2;
printf("\n\n%lf",x);
//here the 'e'used to print  35* 10^3 
//and '%.1f' is used insted of '%f' for to remove extra zeros and to set the precision
printf("\n\n%.f",35e2);

//("%zu",sizeof(//variale name)); used to get the size of operator
printf("\n%zu\n", sizeof(x));
//print values without variable
printf("My favorite number is :%d",129);
//If you assign a new value to an existing variable, it will overwrite the previous value
//to Get the Memory Size
int myInt;
printf("%zu\n", sizeof(myInt));
/*Type	              Size(in bytes)           
short int(%hd)          2                          
unsigned int(%u)        2 or 4            	    
long int(%ld)	        4 or 8	     	    
long long int(%lld)     8			    
unsinged long int(%lu)  4 or 8               	    
long double(%Lf)        8,12,16 */
//'const' keyword used to declear variable which u cannot change in future 
//When you declare a constant variable, it must be assigned with a value:
const int MYNUMBER=2002;//generaly uppercase is used for contant variable declaration
// in operators modules we cannot use float or double
//Arithmetic operators, including multiplication, always have higher precedence than relational (comparison) operators in C.
//In C, which value represents a true condition in a comparison?
//Consider the expression $3 \mathbf{<} 5 \mathbf{!=} 1$. What is the final result according to C's precedence rules?ANS-0
//  

return 0;
}
 