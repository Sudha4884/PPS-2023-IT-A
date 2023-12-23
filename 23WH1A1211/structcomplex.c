#include<stdio.h>
struct complex
{
int real,imag;
} 

*cptr;
struct complex *cptr1;
void main()

{
	
struct complex *cptr2;
struct complex c1,c2,c3;
cptr=&c1;
cptr1=&c2;
cptr2=&c3;
printf("enter real and imag");
scanf("%d%d",&cptr->real,&cptr->imag);
printf("\nthe complex number is");
printf("\n%d +%d(i)",cptr ->real,cptr->imag);

}

