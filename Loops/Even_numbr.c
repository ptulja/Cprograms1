//Write a program on Even numbers for 1 to 10 by using For loop.
#include<stdio.h>
int main()
{
  //Declaring the variable
    int n;

  /*Now here we have to print the Even numbers of values from 1 to 10
   * Here we are using For loop*/

   //Now Applying the For loop

   for(n = 1; n<10;n++)
   {
       if(n%2==0)
       {	       
         printf("%d\n", n);
       } 	     
   }

  //Exit from the main funcation

   return 0;
}
/*output is
 * 2
 * 4
 * 6
 * 8*/
