#include<stdio.h>
struct complexnum 
{
  int real,imag;
} *cptr;
 struct complexnum *cptr1;
 void main()
 { 
 struct complexnum *cptr2;
 struct complexnum c1,c2,c3;
   cptr=&c1;
   cptr=&c2;
   cptr=&c3;
printf("\n enter real,imag");
scanf("%d%d",&cptr->real,&cptr->imag);
printf("\n the complexnum is");
printf("\n %d+(%d)i",cptr->real,cptr->imag);
printf("\n %d+(%d)i",(*cptr).real,(*cptr).imag);
}
