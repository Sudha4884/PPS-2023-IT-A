#include<stdio.h>
#include<string.h>

struct comp
{int real,imag;
};

void main(){

struct comp comp1;
printf("Enter the real and imaginary numbers: ");
scanf("%d\n %d",&comp1.real,&comp1.imag);
printf("\n%d +i %d",comp1.real, comp1.imag);
}

