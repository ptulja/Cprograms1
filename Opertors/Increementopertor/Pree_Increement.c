/*Increement
 * pree Increement (++a)
 * post Increement(a++)*/

#include<stdio.h>
int main()
{
  //Declare the variables
   int a;

   int b;

  //Assign the values to variable

   a = 10;

  //Apply the main logic

   b = ++a + ++a; 

  //print the value of b

   printf("The value of a is%d\n", a);

   printf("The value of b is%d\n", b);

  //Exit frrom main function

   return 0;

}

/*output is
 * The value of a is12
 * The value of b is24*/


