//Write a program on wheather a student pass or fail or avarage or destication by using nested if

#include<stdio.h>
int main()
{
  //Declaring the variable

   int marks;

 //Assiging the value
   
   printf("Enter the marks:\n");

   scanf("%d", &marks);

//Apply the nested if condition wherather a student pass or not

  if(marks<30)
  {
    printf("fail\n");

  }

  else if(marks<=35)
  {
    printf("pass\n");
  }
  
  else if(marks<=60)
  {
    printf("Avarage\n");
  }

  else if(marks>80)
  {
    printf("destication\n");
  }   

  return 0;
} 

/*output is
 * Enter the marks:
56
Avarage*/

    
 


           

