#include<stdio.h>
//wap to read and print n complex number
struct complex
{
int real;
int imag;
};
void main()
{
int i,n;
printf("\n enter n");
scanf("%d",&n);
struct complex c1[n];
for(i=0;i<n;i++)
{
 printf("\n enter the real,imag");
 scanf("%d%d",&c1[i].real,&c1[i].imag);
}
for(i=0;i<n;i++)
{
printf("\n %d + %di ",c1[i].real,c1[i].imag);
}
}

