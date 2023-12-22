#include <stdio.h>
void main()
{
    int i,j,n,t,A[10];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 1 ; i <= n-1; i++)
        {
            j=i;
    while(j>0 && A[j-1] > A[j])
                 {
                     t = A[j];
                     A[j] = A[j-1];
                     A[j-1] = t;
                     j--;
                 }

        }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n-1; i++)
        printf("%d\n", A[i]);
}

