//Write a progaram on sum of digits numbers.
#include<stdio.h>
int main()
{
   //Declaring the variables.
     int num , reminder,temp, sum =0;
      

   
   //Inilizating the value to variable.
     printf("Enter the num value:");
     scanf("%d", &num);

  //Now we are going to print sum of digits numbers.
  //so we need condition for sum of digits.
  //Applying main logic.
    temp = num;
    while(num!=0)
    {
      reminder = num%10;
      
      sum= sum +reminder;

      num = num/10;
    }  
    printf("The indivisal digits of sum of given number is %d is %d\n", temp ,sum);         
   //Exit from the main funcation. 
     return 0;

}    
/*output is
 * Enter the num value:123456
The indivisal digits of sum of given number is 123456 is 21 */




          
