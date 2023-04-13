#include<stdio.h>
int main()
{
   	//Declaring the variables

     	float num1;
     
     	float num2;
     
         float result;

   	//print the num1

     
   	printf("Enter the num1:");

     	scanf("%f", &num1);
    
    	//print the num2
	
        printf("Enter the num2:");
        
        scanf("%f", &num2);

       //main sum logic

       result=num1+num2;

      printf("Result of %f and %f number is %f\n", num1, num2, result);
      
      return 0;
}      
