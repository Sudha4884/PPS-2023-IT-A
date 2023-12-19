#include<stdio.h>
struct complex
{
int real, imag;
};
void main()
{
struct complex comp[50];
int i,n,real,imag;
printf("\n Enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter real,imag:");
scanf("%d%d",&comp[i].real,&comp[i].imag);
}
for(i=0;i<n;i++)
{
printf("\n %d+(%d)i",comp[i].real+comp[i].imag);
}
}





    
