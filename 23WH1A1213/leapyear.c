#include<stdio.h>
int checkLeapYear(int);
void main()
{
  int y,res;
 
   res = checkLeapYear(2000);
     if(res == 1)
    printf("\n leap year");
     else
    printf("\n not a leap year");
   printf("\n Enter an Year ");
   scanf("%d",&y);
   res = checkLeapYear(y);
     if(res == 1)
       printf("\n leap year");
     else
       printf("\n not a leap year");
   
}
int checkLeapYear(int num)
{
  if(num%400==0||(num%100==0)&&(num%4==0))
       return 1;
    
      
     
  else
     
      return 0;
     
}   
