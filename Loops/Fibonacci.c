//Write a program on Fobanicci series.
#include<stdio.h>
int main()
{ 
   //Declaring the variable.
     int i;
     int num;
     int temp = 0;

     //Taking values from scanf and print the value
       printf("Enter the num value:");
       scanf("%d", &num);

     //we have to print some of natural numbers.
     //so its a repeted .
     //Take for loop.

     //Main logic  	     
       for(int i=0; i<num; i++)
       { 
	 temp=temp+i;     
         printf("%d\n",temp);  	
       }
       //Exit from the main funcation.  
       return 0;
}     
/*output is
 * 0
 * 3
 * 6
 * 10*/       
      	
