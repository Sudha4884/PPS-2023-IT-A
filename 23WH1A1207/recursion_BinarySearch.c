#include<stdio.h>
int binarysearch(int [], int,int,int);
void main()
{
int A[10],n,i,k,res,low,high;
printf("\n enter n :");
scanf("%d",&n);
printf("\n enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
for(i=0;i<n;i++)
printf("%d ",A[i]);
printf("\n enter k :");
scanf("%d",&k);
res = binarysearch(A,0,n-1,k);
printf("\n %d",res);

}

int binarysearch(int A[], int low, int high, int k)
{
int mid;
if(low<=high)
{
mid = (high+low)/2;
if(k == A[mid])
	return mid;
else if (k< A[mid])
	return binarysearch(A,low,mid-1,k);
else
	return binarysearch(A,mid+1,high,k);
}
	return -1;
}

