//switch with do while
#include<stdio.h>
void main()
{
 int a,b;
 char choice;
 printf("\nenter a number: ");
 scanf("%d",&a);
 printf("\nenter another number: ");
 scanf("%d",&b);
 printf("\nthe choices are:");
 printf("\n+-addition,\n--subtraction,\n*-multiplication,\n/-divison,\n%%-modulus");
 printf("\nenter your choice: ");
 scanf(" %c",&choice);
        switch(choice)
        {
        case'+':
        printf("addition is %d",a+b);
        break;
        case'-':
        printf("subtraction is %d",a-b);
        break;
        case'*':
        printf("multiplication is %d",a*b);
        break;
        case'/':
        printf("divison is %d",a/b);
        break;
        case'%':
        printf("mod is %d",a%b);
        break;
        default:
        printf("try again");
        break;
        }
}

