//Write a program to print 1 to 15 numbers.
#include<stdio.h>
int main()
{
    //Declaring the variables
      int i;
      int num;

    //Taking the values from scanf and print num value.
      printf("Enter the num value:");
      scanf("%d",& num);

   //Now we are going to apply the for loop for the itration.
   //Main logic for print numbers from 1 to 15.
     for(i = 1; i <= num; i++)
     {
        printf("%d\n", i);
     }
     //Exit from the main funcation.
     return 0;
}
/*output is
 * 1
 * 2
 * 3
 * 4
 * 5
 * 6
 * 7
 * 8
 * 9
 *10
  11
  12
  13
  14
  15 */

