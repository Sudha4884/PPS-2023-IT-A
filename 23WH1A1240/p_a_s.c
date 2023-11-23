#include<stdio.h>
struct complex
 {
   int real,imag;
 };
void main()  {
 int n,i;
scanf("%d",&n);
struct complex c[n] ,*ptr;
 ptr=c;
printf("size= %ld",sizeof(c));
for(i=0;i<n;i++)
{
  printf("\n enter real,imag");
 scanf("%d%d",&ptr->real,&ptr->imag);
 ptr++;
}
for(i=0;i<n;i++)
{
 printf("\n%d + %di",ptr->real,ptr->imag);
 ptr++;
}
}



 
  
