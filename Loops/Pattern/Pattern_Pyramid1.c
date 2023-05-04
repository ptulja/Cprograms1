//Write a progaram on Pyramid with spaces.
#include<stdio.h>
int main()
{
   //Declaring the variables.
     int i,j,k,num;

   //Taking the value from scanf and print the value.
     printf("Enter the num value:");
     scanf("%d", &num);

  //Here we have to print the "*" in Pyramid in shape.
  //So here we are to print in rows and cloums.
  //Applying the main logic.
   for(i = 1; i <= num; i++)
   {
     for(j = num; j > i; j--)
     {
       printf("  ");
     }
     for(k = 1; k <= (i*2)-1; k++)
     {
       if((k == 1) || (k == (i*2)-1) || (i == num))
       {
         printf("* ");
       }
       else
       {
         printf("  ");
       }
     }
     printf("\n");
   }
   return 0;
}
/*output is 
Enter the num value:5
    
        *
      *   *
    *       *
  *           *
* * * * * * * * * */
                  
