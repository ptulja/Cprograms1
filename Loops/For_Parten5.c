//Write the program on priting the * number of times in rows and cloums.
#include<stdio.h>
int main()
{
  //Declaring the variable
    int i;
    int j;
    int num;

  //Taking the value from scanf and print the num value
    printf("Enter the  num value:");
    scanf("%d", &num);
   
  //Print the * in rows and cloums
  //So repeating the  in rows and cloums.
  //Use the for loop
  //Applying the main logic

   for(i = 0;i<num;i++)
   {
     for(j = 0;j<i+1;j++)
     {
       printf("* ");
     }
    printf("\n");
   } 
   
   return 0;
}
Output is
Enter the num value:3
*
* *
* * *

