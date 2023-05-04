#include<stdio.h>
int main()
{
   //Declaring the variable
    int num;
    int i;

   //Printing and taking the value frim printf and scanf
    printf("Enter the num value:\n");
    scanf("%d", &num);

  //Entring in to main logic
   for(i=1;i<num;i++) 
   {
      num+=i;
      printf("%d\n",num);
  
   }
   return 0;
}   
