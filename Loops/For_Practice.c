//write a program on printing the * into rows and cloums.
#include<stdio.h>
int main()
{
   //Declaring the variables
     int i;
     int j;
     int num1;
     int k;
  
   //Taking the value from scanf and printing the num value.
     printf("Enter the num1 value:");
     scanf("%d", &num1);
   
   //Now our requriment the print  * in rows and cloums.
   //Frist we have to print in increment in rows and coulms.
   //Next we have to print in decrement in rows and coulms.
   //It repeating in rows and cloums so take For loop.
   //Applying the Main logic.
    
     for(i = 0; i < num1; i++)
     {
       for(j = 5; j > i;j--)
       {
         printf("* ");
       }
        	      
      for(k = ; k < i+1; k++)
      {
          printf("* ");
      }   
      printf("\n");   
     }         
      //Exit from main funcation.
        return 0;
}      	
            
