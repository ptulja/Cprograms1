//Write a program on square of 1 to 9 numbers.
#include<stdio.h>
int main()
{
   //Declaring the variable.
     int i,squre; 

   //Here we are going to print more than one number of square.
   //So now we are applying main logic that is for loop.
     for(i = 1; i <= 9 ; i++)
     {
           squre= i*i;		 
           printf("The value of %d squre is %d\n",i, squre);		            
     } 
   //Exit from the main funcation.      
     return 0;
 
}    
/*output is
 * The value of 1 squre is 1
The value of 2 squre is 4
The value of 3 squre is 9
The value of 4 squre is 16
The value of 5 squre is 25
The value of 6 squre is 36
The value of 7 squre is 49
The value of 8 squre is 64
The value of 9 squre is 81 */

       
      
     	
