//Write a program to print 10 to 1 numbers.
#include<stdio.h>
int main()
{
    //Declaring the variables
      int i, j;
      int num;

    //Taking the values from scanf and print num value.
      printf("Enter the num value:");
      scanf("%d",& num);

   //Now we are going to apply the for loop for the itration.
   //Main logic for print numbers from 10  to 1 in reverse order.
     for(i = 10; i >=1 ; i--)
     {
        printf("%d\n", i);
     }
     //Exit from the main funcation.
     return 0;
}
/*out put is
 * 10
 * 9
 * 8
 * 7
 * 6
 * 5
 * 4
 * 3
 * 2
 * 1

