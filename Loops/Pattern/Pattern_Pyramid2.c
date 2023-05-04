//Write a progaram on reverse pyramid by using loops.
#include<stdio.h>
int main()
{
   //Declaring the variables.
    int i,j,k,num;
  
  //Taking the values from scanf and print the value.
    printf("Enter the num value:");
    scanf("%d", &num);
 
  //Now we to print reverse pyramid in rows and cloums.
  //We need loops concept.
  //Applying the main logic
   for(i =1 ; i <= num; i++)
   {
     for(j = 1; j<= i;  j++)
     {
       printf(" ");
     }
     for(k = i ; k<=(num*2)-i; k++)
     {
       printf("*"); 
     }
     printf("\n");
   }
   return 0;
}   
/* output is
 * Enter the num value:5
     *********
      *******
       *****
        ***
	 *  */
