#include <stdio.h>
int arrSum(int [],int);
void main()
{
    int a[]={1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    printf("Sum of array elements is %d \n",arrSum(a,size));
}
int arrSum(int a[],int size)
{
    if(size==0)
    {
        return 0;
    }
    else
        return  a[size-1]+arrSum(a,size-1);
}

