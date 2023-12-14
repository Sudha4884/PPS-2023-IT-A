#include<stdio.h>
int ReadArray(int []);
void PrintArray(int [],int );
int BinarySearch(int [], int );
int main()
{
int A[10],n,res,i;
n=ReadArray(A);
PrintArray(A,n);
res = BinarySearch(A,n);
if (res == -1)
{
printf("\n element isnt present in list ");
}
else
{
printf("\n element is present in list at %d",res);
}
return 1;
}
int ReadArray(int A[])
{
int n,i;
printf("enter n:");
scanf("%d",&n);
printf(" enter %d elements ",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
return n;
}

void PrintArray(int A[],int n)
{
int i;
puts("\n");
for(i=0;i<n;i++)
printf("%d ",A[i]);
}

int BinarySearch(int A[], int n)
{
int low=0,mid,high=n-1,k;
printf("enter k :");
scanf("%d",&k);
while(low<=high)
{
mid = (low+high)/2;
if(A[mid] == k)
return mid;
else if (A[mid] < k )
low = mid + 1;
else
high = mid - 1;
}
return -1;
}

