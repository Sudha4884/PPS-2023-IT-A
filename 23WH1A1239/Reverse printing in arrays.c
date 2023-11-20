#include <stdio.h>
void main()
{
    int a[100];
    int n,i;
    int *p=a;
    printf("Enter size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter array element [%d]:",i);
        scanf("%d",p+i);
    }
    printf("Array elements in reverse order: ");
    for (i=n-1;i>=0;i--)
    {
        printf("\n%d",*(p+i));
    }
}
