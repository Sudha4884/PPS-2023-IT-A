#include<stdio.h>
struct complex
{
int real;
int imag;
};
void main()
{
struct complex cmp[20];
int n,i;
printf("\n enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter real,imag");
scanf("%d%d",&cmp[i].real,&cmp[i].imag);
}
for(i=0;i<n;i++)
{
printf("\n %d+%di",cmp[i].real,cmp[i].imag);
}
}
