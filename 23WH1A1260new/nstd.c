#include<stdio.h>
struct complex
{
int real, imag;
};
void main()
{
struct complex c[5];
int n,i;
printf("enter a value to n");
scanf("%d",&n);
for(i=1;i<n;i++){
printf("enter the real and imag values");
scanf("\n %d%d",&c[i].real,&c[i].imag);
printf("\n %d+(%d)i",c[i].real,c[i].imag);
}
for(i=0;i<n;i++)
printf("\n %d+(%d)i",c[i].real,c[i].imag);
}


