//Write a program on opration
#include<stdio.h>
int main()
{
  char opration;

   int  a;
    
   int  b;
   
   //Assiging the values
     
    a = 10;

    b = 20;
   
   /*Enter the which opration we want(+,-,*,/,%)
    * Next print the a,b values
    * Next perform the opration*/
    
    printf("Enter the opration(+,-,*,/):\n");
    
    scanf("%c", &opration);
     
   //Main logic

   switch(opration)
   {
      case '+':
	      printf("%d+%d=%d\n", a,b,a+b);	       
              break;

      case '-':
	      printf("%d-%d=%d\n", a,b,a-b);
	      break;
      case '*':
               printf("%d*%d=%d\n", a,b,a*b);      
               break;
      case '/':
              printf("%d/%d=%d\n", a,b,a/b);
              break;	      
      default:
             printf("invalid\n");      
             break; 
    }
    return 0;
}
/*output is
 *Enter the opration(+,-,*,/):
+
10+20=30

    
     
