//Write the program on Fraction
#include<stdio.h>
int main()
{ 
	//Decalre the variable
	
  	  int n;
	  
	// print the n value
   
  	printf("Enter any number:\n");

  	scanf("%d" , &n);
        
       //Applying the for loop

  	for(int i=1;i<=10;i++)
  	{
		//Apply the main logic

   		printf("%d*%d=%d\n", n,i,n*i);
  	}	
  return 0;
}  
/*Enter any number:
17
17*1=17
17*2=34
17*3=51
17*4=68
17*5=85
17*6=102
17*7=119
17*8=136
17*9=153
17*10=170*/

