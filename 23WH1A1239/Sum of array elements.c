#include <stdio.h>
void main()
{
    int a[100], n;
    int *ptr, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    ptr = a;
    for (int i = 0; i < n; i++) {
        sum = sum + *ptr;
        ptr++;
    }
    printf("The sum of array elements is: %d", sum);

}
