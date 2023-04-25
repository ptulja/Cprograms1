//Wrire a program on days by using Switch condition
#include<stdio.h>
int main()
{
  //Declare the variable

    int day;

  //Print the number from 0 to 7

   printf("Enter the day from 1 to 7  number:\n");
   
   scanf("%d", &day);
  
  //Main logic

   switch(day)
   {
      case 1:
            printf("Monday\n");
            break;
      case 2:
            printf("Tusday\n");
            break;
      case 3: 
            printf("Wensday\n");
            break;
       case 4:
             printf("Thusday\n");
             break;
       case 5:
             printf("Friday\n");
             break;
       case 6:
             printf("Starday\n");
             break;
       case 7:
             printf("Sunday\n");
             break;
        default:
               printf("invalid\n");
               break;
     }
   //Exit from the main funcation
    
     return 0;
}
/*output is
 * Enter the day from 1 to 7  number:
1
Monday

Enter the day from 1 to 7  number:
2
Tusday

Enter the day from 1 to 7  number:
3
Wensday

Enter the day from 1 to 7  number:
4
Thusday

Enter the day from 1 to 7  number:
5
Friday

Enter the day from 1 to 7  number:
6
Starday

Enter the day from 1 to 7  number:
7
Sunday*/


