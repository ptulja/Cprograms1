#include<stdio.h>
int main()
{
  //Declaring the variables
    int i;
    int j;
    int num;

  //Taking the num value form scanf and printing
    printf("Enter the num value:");
    scanf("%d", &num);

   //For print the * values at num times in rowms and cloums.
   //using for loop beacuse of repeting .
   //Main logic.
    for(i = 0; i<num; i++)
    {
      for(j = 5;j>i;j--)
      {
         printf("* ");
      }
      printf("\n");
    }
    return 0;
}
output is
Enter the num value:5
* * * * *
* * * *
* * * 
* * 
*


       
