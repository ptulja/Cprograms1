//Write a program on print * in Pyramid Shape.
#include<stdio.h>
int main()
{
   //Declaring the variables
     int i,j,k,num;
   
  //Taking the num value from scanf and print the value.
    printf("Enter the num value:");
    scanf("%d", &num);

  //Here we are going to print " *" in pyramid shape.
  //So we need rows and cloums , i,j,k.
  //Now applying main logic that is for loop.
    for(i = 1;i < num;i++)
    {
      for(j = num;j >i;j--)
      { 
	printf(" ");
      }
      for(k = 0;k<(i*2)-1;k++)
      {
	{
	   printf("*");
	}
       
      }	   
      printf("\n");
    }  
    
  //Exit from the main funcation.
    return 0;
}    
output is
    *
   ***
  *****
 *******  
