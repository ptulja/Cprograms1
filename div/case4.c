#include<stdio.h>
int main()
{
    //Assign the values

      num1=10;
      num2=5;

    // Declare the variables

     int num1;
     int num2; 
     int result;

    // Appyling the main logic

    result=num1/num2;

    //Print the value

     printf("%d\n", result);

     return 0;
}

/*output
 * error: ‘num1’ undeclared (first use in this function)
    6 |       num1=10;
      |       ^~~~
case4.c:6:7: note: each undeclared identifier is reported only once for each function it appears in
case4.c:7:7: error: ‘num2’ undeclared (first use in this function)
    7 |       num2=5;*/

