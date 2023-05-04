//write a program on printing the * into rows and cloums.
#include<stdio.h>
int main()
{
   //Declaring the variables
     int i;
     int j;
     int num;
  
   //Taking the value from scanf and printing the num value.
     printf("Enter the num1 value:");
     scanf("%d", &num);
   
   //Now our requriment the print  * in rows and cloums.
   //Frist we have to print in increment in rows and coulms.
   //Next we have to print in decrement in rows and cloums.
   // Main logic.
     
     //Outer loop for rows.
     for(i = num; i > 0; i--)
     {
       //Inner loop for colums.	     
       for(j = i; j > 0;j--)
       {
         printf("* ");
       } 
       //For new line after complete the row
         printf("\n");
     }	
     //outer loop for rows
     for(i = 1; i<=num ;i++)
     { 
       //Inner  loop for colums.
       for(j = 1; j <= i; j++)
       {	       
          printf("* ");
       }
	//For new line after completing the row. 
         printf("\n");
       }
       
      //Exit from main funcation.
        return 0;
}      	
            
