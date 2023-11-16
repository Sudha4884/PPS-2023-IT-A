#include<stdio.h>
struct complex
{
	int real,img;
};
void main()
{
struct complex c1[64];
int i,n;
printf("Enter a value for n: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter a value for real and imaginary numbers: ");
scanf("%d %d",&c1[i].real,&c1[i].img);
}
for(i=0;i<n;i++)
{
printf("\n %d+(%d)i ",c1[i].real,c1[i].img);
}
}
