//Write a program on Prime numbers for 1 to 100 by using For loop.
#include<stdio.h>
int main()
{
  //Declaring the variable
   int num;
   int i;
   int flag = 0;

   printf("Enter the number:");
   scanf("%d", &num);

  /*Now here we have to print the Prime numbers of values from 1 to 10
   * Here we are using For loop*/

   //Now Applying the For lo
   
       for(i = 1; i<=num;i++)
       {	       
         if(num%i==0)
        { 	       
          flag += 1;
        }
      }
      if(flag == 2)
      {
        printf("%d is prime number\n", num);
      }
      else
      {
        printf("%d is not a prime number\n", num);
      } 	

  //Exit from the main funcation

   return 0;
}
/*output is
 * Enter the number:3
 * 3 is prime number*/

