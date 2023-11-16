#include<stdio.h>
struct comp
{
 int real;
 int imag;
};
void main()
{
 int n,i;
 printf("\n enter n:");
 scanf("%d",&n);
 struct comp c[n];
 for(i=0;i<n;i++)
 {
  printf("\n enter real,imag:");
  scanf("%d%d",&c[i].real,&c[i].imag);
 }
 for(i=0;i<n;i++)
 {
 printf("\n %d+%di",c[i].real,c[i].imag);
 }
}
