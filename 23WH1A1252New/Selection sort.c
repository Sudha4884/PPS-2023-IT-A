#include <stdio.h>
void selectionsort(int [],int);
void swap(int *,int*);
void main()
{
    int n,a[10],i;
    printf("enter n value :  ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selectionsort(a,n);
    for(i=0;i<n;i++)
    printf("%d ", a[i]);
}
void selectionsort(int x[],int n)
{ int i,j,min;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(x[min] > x[j])  
          min = j;
        }
        if(min!=i)
        swap(&x[i],&x[min]);
    }
}
void swap(int *a,int *b) 
{
    int *t;
    *t = *a;
    *a = *b;
    *b = *t;
}
     
 

