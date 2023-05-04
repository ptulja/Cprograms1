//Write a Program on  print Hello reverse pyramid. 
#include<stdio.h>
int main()
{
  //Declaring the variables.
    int i , j, k, num;
   
  //Taking the value from scanf and print the value.
    printf("Enter the num value:");
    scanf("%d", &num);
 
  //Now we are going to print Hellow Reactangle
  //So we need rows(i), and cloums(j).
  //Now applying the main logic.
    for(i = 1; i <= num ; i++)
    {  
      for(j=1; j<=i; j++)
      {
        printf(" ");
      }	             
      for(k = i;k <= (num*2)-i;k++)
      {  
	if((k == i)  || (k==(num*2)-i) || (i == 1))
	{
           printf("*");
        }
        else
        {
           printf(" ");		 
        }
      } 	 
       printf("\n");
    }                        
    return 0;
}    
