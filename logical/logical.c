#include<stdio.h>
int main()
{
   
    //declare the variables
      
     int a;
     
     int b;
 
     int c;

     int r;

   //assign the values

    a = 10;

    b = 0;

    c = 20;


  //apply the main logic
   
    r=(a=b)||(b=c);

  //print the r value

   printf("%d\n", r);

   printf("%d %d %d\n", a,b,c);

   return 0;
}


/*output is 1
 * 0 20 20*/
     
