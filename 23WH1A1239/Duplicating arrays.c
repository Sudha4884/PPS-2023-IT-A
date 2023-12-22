#include <stdio.h>
void duplicate(int [], int);
void main()
{
    int A[10],n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        printf("%d",A[i]);
    }
    duplicate(A,n);
}
void duplicate(int A[],int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(A[i]==A[j])
                c++;
    }
    if(c>0)
        printf("Duplicate element exist");
    else
        printf("No duplicate element exist");
}
