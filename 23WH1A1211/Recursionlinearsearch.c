#include<stdio.h>
void main()
{
int A[10],i,n,k;
printf("enter n : ");
scanf("%d",&n);
printf("\n enter %d elements : ",n);
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
for(i=0;i<n;i++)
{
printf("%d ",A[i]);
}
printf("enter k value :  ");
scanf("%d",&k);
printf("%d",linear(A,n,k));
}

int linear (int A[], int n, int k)
{
if(n==0)
	return -1;
else
{
if (k == A[n-1])
	return n-1;
else
	return linear(A,n-1,k);
}
}
