#include<stdio.h>
int main()
{
  //declare the variables
    int a, b, c, m;

    int r;

    // assign the values to the variable

       a = 10;

       b = 2;

       c = 20;

       m = 2;

   //apply the main logic

   r = (m+=b)+!(a*b);

   //ptint the r value

    printf("%d\n", r);

    //Exit from main funcation

     return 0;
}
/*output is 4 */
