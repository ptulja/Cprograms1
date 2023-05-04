//Write a program on Factorials  by using For loop.
#include<stdio.h>
int main()
{
  //Declaring the variable
   
   int num;
   int i;
   int temp=1; 
     
   //For Enter the value of n we printf and sacnf 
     printf("Enter the num value:");
     scanf("%d", &num);
  /*Now here we have to print the Factorial of values
   * Here we are using For loop 
   *So formul for the Factorial is n!=n*(n-1)*(n-2)*.i.....*1*/

   //Now Applying the For loop
     for(i=0; i<num;i++)	   
     { 
       temp=temp*(num-i);	     
       printf("%d\n", temp);
     } 
     
  //Exit from the main funcation

   return 0;
}   
/*3
 * 6
 * 6*/

        
