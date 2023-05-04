//Write a progaram on sum of even numbers.
#include<stdio.h>
int main()
{
   //Declaring the variables.
     int i , sum = 0;

   //Now applying the main logic.
   for(i = 1; i <= 10; i++)
   {   
       //Checking the even numbers with if condition.   
	 if(i%2==0)
         {		  
           printf("%d\n", i);
           
	   sum = sum + i;

	 }
        	    	   
   }     
   printf("The sum of even numbers is %d\n", sum);
   
   return 0;
}   
      
         
        
