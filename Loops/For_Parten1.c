//Write the program on print the * in to roes and cloums.
#include<stdio.h>
int main()
{
   //Declaring the variable
     int i;
     int j;
     int num;

   //Taking value for the num and print value
     printf("Enter the num value:");
     scanf("%d", &num);
    
   //Here we have to print * in rows and cloums.
   //For that perpouse we are taking for loop.
   //' * ' repeting in in every row and cloum.
   // main logic
    
      for(i=0;i<num;i++)
      {
         for(j=0;j<i+1;j++)
         {
            printf("* ");
         }
        printf("\n");
      }
      return 0;
    
    
}
/*output is 
*
* *
* * *
* * * *
* * * * * */
