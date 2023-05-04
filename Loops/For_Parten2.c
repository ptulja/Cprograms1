//Write a program on values print in rows and cloums.
#include<stdio.h>
int main()
{
   //Declaring the variables
     int i;
     int j;
     int num;

  //Taking value from scanf and print num value
    printf("Enter the num value:");
    scanf("%d", &num);

  //For print the values in rows and cloums
  //Repeating values need to print
  //main logic

   for(i = 0; i<num; i++)
   {
     for(j = 0; j<i+1; j++)
     {
       printf("%d ", i+1);
     }
     printf("\n");
   }
   return 0;
} 
output is 
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5
          
