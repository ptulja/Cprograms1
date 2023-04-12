#include<stdio.h>
int main()
{
    //Assign the values

      num1=5;

      num2=5;
    
    //Decalare the variables

      int num1;
      
      int num2;
      
      int result;   

    // Appyling the main logic

      result=num1*num2;

    //Print the value

     printf("%d\n", result);

     return 0;
}

/*output
 * Error beacuse with out datatype given the values to the varablies
 * error: ‘num1’ undeclared (first use in this function)
    6 |       num1=5;
      |       ^~~~
case3.c:6:7: note: each undeclared identifier is reported only once for each function it appears in
case3.c:8:7: error: ‘num2’ undeclared (first use in this function)
    8 |       num2=5;
      |       ^~~~
 */
