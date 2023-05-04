//Write a program on Do  while loop to print the number from 1 to 10.
#include<stdio.h>
int main()
{
  //Declaring the variable

    int i;

  //Assign the value to the variable i

    i = 1;

   /*Now we have to Print the number from 1 to 10
    * Now use the loop concept
    * So here we are using Do  While loop*/

    do
    {
       printf("%d\n", i);

       i++;

    }while(i<11);

    //Exit from the main funcation.

    return 0;
}
/*output is
 * 1
2
3
4
5
6
7
8
9
10*/

