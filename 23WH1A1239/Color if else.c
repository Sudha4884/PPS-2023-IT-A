#include <stdio.h>
void main()
{
   char ch;
   printf("Enter first letter: ");
   scanf("%c",&ch);
   if(ch=='R'||ch=='r')
   {
       printf("Red");
   }
   else if(ch=='B'||ch=='b')
    {
       printf("Blue");
   }
   else if(ch=='G'||ch=='g')
    {
       printf("Green");
   }
   else if(ch=='Y'||ch=='y')
    {
       printf("Yellow");
   }
   else if(ch=='O'||ch=='o')
    {
       printf("Orange");
   }
   else if(ch=='P'||ch=='p')
    {
       printf("Purple");
   }
    else if(ch=='W'||ch=='w')
    {
       printf("White");
   }
    else if(ch=='V'||ch=='v')
    {
       printf("Violet");
   }
   else
    printf("Not a valid color");
}
