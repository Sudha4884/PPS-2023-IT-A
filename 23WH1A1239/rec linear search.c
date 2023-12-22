#include <stdio.h>
int linear(int [],int,int);
void readArr(int [], int);
void main()
{
    int a[10],n,i,k;
    printf("Enter n: \n");
    scanf("%d",&n);
    readArr(a,n);
    printf("Enter element to search: \n");
    scanf("%d",&k);
    i = linear(a,n,k);
    printf("\n %d is present");
}
void readArr(int a[],int n)
{
    int i;
    printf("\nEnter %d num: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int linear(int a[],int n,int k)
{
    if(n==0)
    {
        return -1;
    }
    else
    {
        if(k==a[n-1])
            return n-1;
        else
            return linear(a,n-1,k);
    }
}
