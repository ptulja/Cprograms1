#include<stdio.h>
int main()
{
    //Declare the variables

      int num1;

      int num2;

      int result;

      //print with empty sring

       printf(" ");

       //print with string

       printf("Enter the num1 value:" , num1);

       scanf("%d", &num1);

       printf("Enter the num2 value:" , num2);

       scanf("%d", &num2);

       //print the output

       printf("Result of 2 given number is%d\n", result);

       return 0;
}

/*output
 *  warning: too many arguments for format [-Wformat-extra-args]
   18 |        printf("Enter the num1 value:" , num1);
      |               ^~~~~~~~~~~~~~~~~~~~~~~
case5.c:22:15: warning: too many arguments for format [-Wformat-extra-args]
*/             

