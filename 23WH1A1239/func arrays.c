#include <stdio.h>
void readArray(int [],int);
void printArray(int [], int);
void sumArray(int[], int);
void minmax(int[], int);
int linearSearch(int[], int);
int binarySearch(int [],int);
void main()
{
    int A[10],n,i,a,b;
    printf("Enter n: ");
    scanf("%d",&n);
    readArray(A,n);
    printArray(A,n);
    sumArray(A,n);
    minmax(A,n);
    a = linearSearch(A,n);
    printf("%d is the element",&a);
    b = binarySearch(A,n);
    printf("%d is the element",&b);
}
void readArray(int A[],int n)
{
    int i;
    printf("Enter %d numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
}
void printArray(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n %d",&A[i]);
    }
}
void sumArray(int A[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + A[i];
    }
    printf("\n Sum of array elements is: %d",sum);
}
void minmax(int A[], int n)
{
    int i,min,max;
    min = A[0];
    max = A[0];
    for(i=0;i<n;i++)
    {
        if(max<A[i])
            max = A[i];
    }
    printf("\n Maximum num: %d",max);
    for(i=0;i<n;i++)
    {
        if(min>A[i])
            min = A[i];
    }
    printf("\n Minimum num is: %d",min);
}
int linearSearch(int A[], int n)
{
    int k,i;
    printf("Enter element to search: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==A[i])
            return 1;
    }
    return 0;
}
int binarySearch(int A[], int n)
{
    int k,low=0,high=n-1,mid,i;
    printf("Enter element to search: ");
    scanf("%d",&k);
    while(low <= high)
    {
        mid = (low+high)/2;
        if(A[mid]==k)
            return mid;
        else if(A[mid]<k)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}
