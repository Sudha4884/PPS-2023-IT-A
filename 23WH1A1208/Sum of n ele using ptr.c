#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &(*(arr + i))); 
    }

    int sum = 0;
    int *ptr = arr; 

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i); 
    }

    printf("Sum of %d elements in the array: %d\n", n, sum);

    return 0;
}
