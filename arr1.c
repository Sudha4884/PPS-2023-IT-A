#include<stdio.h>
void printarray (int [], int);
int main()
{
int A[10],i,n;
printf("\n Enter n ");
scanf("%d", &n);
printf("Enter %d numbers ", n);
for(i=0;i<n;i++)
scanf("%d",A[i]);
for(i=0;i<n;i++)
printf("%d ", A[i]);
}
