#include<stdio.h>
int min(int [],int);
int max(int [],int);
float avg(int [],int);
int readarray(int [],int);
void main()
{
    int C[100];
    int n;
    printf("enter number of elements : ");
    scanf("%d",&n);
    readarray(C,n);
    int a = min(C,n);
    printf("min of arrays is %d ",a);
    int b = max(C,n);
    printf("\n max of arrays is %d ",b);
    float c = avg(C,n);
    printf("\n avg of arrays is %f ",(c/n));
    
}
int readarray(int B[],int num)
{
    printf("enter %d elements : ",num);
    for(int i = 0;i < num;i++)
    {
        
        scanf("%d",&B[i]);
    }
}
int min(int A[],int noe)
{
    int min = A[0];
    for(int i = 1;i < noe; i++)
    {
        
        if(A[i] < min)
        {
            min = A[i];
        }
    }return min;
}
int max(int A[],int noe)
{
    int max = A[0];
    for(int i = 1;i < noe; i++)
    {
        
        if(A[i] > max)
        {
            max = A[i];
        }
    }return max;
}
float avg(int A[],int noe)
{
    int avg = 0;
    for(int i = 0;i < noe; i++)
    {
        avg = A[i]+avg;
        
    }return avg;
}
