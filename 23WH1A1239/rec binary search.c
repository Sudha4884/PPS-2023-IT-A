#include <stdio.h>
int binary(int [],int,int,int);
void readArr(int [], int);
void main()
{
    int a[10],n,i,k;
    printf("Enter n: \n");
    scanf("%d",&n);
    readArr(a,n);
    printf("Enter element to search: \n");
    scanf("%d",&k);
    i = binary(a,0,n-1,k);
    if(i==1)
        printf("\n Element is not present");
    else
        printf("\nElement is not present");
}
void readArr(int a[],int n)
{
    int i;
    printf("\nEnter %d nums: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int binary(int a[],int l,int h,int k)
{
    int mid;
    if(l<=h)
    {
        mid = (l+h)/2;
        if(k==a[mid])
            return mid;
        else if(k<a[mid])
            return binary(a,l,mid-1,k);
        else
            return binary(a,mid+1,h,k);
    }
    else
        return -1;
}
