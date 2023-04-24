#include<stdio.h>
int main()
{
  //Declaring the variable

   int marks;

  //Assigning the value  
  
   marks = 45;

  //Apply the nested condifion for check the wheather a student pass or fail  

  if(marks=40)
  {
    if(marks<=35)
    {
       printf("Fail\n");
    }
    else
    {
      printf("Pass\n");
    }
  }
  else if(marks<=45)
  {
    printf("Avarage\n");
  }
  else if(marks<80)
  {
    printf("Topper\n");
  }
 //Exit from the main function
 
  return 0;
}

/*output is 
 * Pass*/
    	  
