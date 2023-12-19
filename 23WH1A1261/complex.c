#include<stdio.h>
struct complex
{
int real,imag;
}*cptr;
struct complex *cptr;
void main()
{
struct complex *cptr2;
struct complex c1,c2;
   cptr = &c1;
   cptr2 = &c2;
printf("Enter real,imag");
scanf("%d %d",&cptr->real, &cptr->imag);
printf("\n The complex number is :");
printf("\n %d +(%d)i", cptr->real,cptr->imag);
printf("\n %d +(%d)i",(*cptr).real,(*cptr).imag);
printf("\nEnter real,imag");
scanf("%d %d",&cptr2->real,&cptr2->imag);
printf("\n The complex number is: ");
printf("\n %d +(%d)i",cptr2->real,cptr2->imag);
printf("\n %d +(%d)i",(*cptr2).real,(*cptr2).imag);

  return 0;
}

