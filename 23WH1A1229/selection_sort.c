#include <stdio.h>
void selectionSort(int [], int);
void swap(int *a,int *b);
void main()
{
    int A[10], i, size;
    printf("\nEnter numbers");
    scanf("%d",&size);
    printf("Enter %d numbers: ",size);
    printf("\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    selectionSort(A,size);
    printf("\nSorted array is: ");
    for(i=0;i<size;i++)
    {
        printf(" %d",A[i]);
    }
}
void selectionSort(int arr[], int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]<arr[j])
                swap(&arr[i],&arr[j]);
        }
    }
}
void swap(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}