#include<stdio.h>
int linearsearch(int A[],int n,int k);
void main()
{
int n,i,A[10],k;
printf("Enter number of elements");
scanf("%d",&n);
printf("enter array elements");
for (i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
for (i=0;i<n;i++)
{
printf("%d\n",A[i]);
}
printf("Enter number to be searched");
scanf("%d",&k);
printf("%d",linearsearch(A,n,k));
}
int linearsearch(int A[],int n,int k)
{
if(n == 0)
return -1;
else
{if(k == A[n-1])
return n-1;
else 
return linearsearch(A,n-1,k);
}
}
