#include<stdio.h>
int main()
{
  //declare the variables

    int a;
    
    int b;

    int c;

  //assign the values to variables
     
    a = 10;

    b = 20;
 
  //apply the main logic

    c = a^=b^=a^=b;
  
  //ptint the c value

   printf("%d\n", c);

   printf("\n");

  //print a,b values 

   printf("%d %d\n", a,b);

   return 0;

} 

/*output is 20

20 10*/

