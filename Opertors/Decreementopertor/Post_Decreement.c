/*Decreementopertor
 * pree Decreement (--a)
 * post Decreement(a--)*/
//Write a program on post_Dcreement
#include<stdio.h>
int main()
{
  //Declare the variables
   int a;

   int b;

  //Assign the values to variable

   a = 10;

  //Apply the main logic

   b = a-- - a--;

  //print the value of b

   printf("The value of a is%d\n", a);

   printf("The value of b is%d\n", b);

  //Exit from main function

   return 0;

}
/*The value of a is8
 The value of b is1*/


