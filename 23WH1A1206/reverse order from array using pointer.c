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

    printf("Elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(arr + i)); 
    }
    printf("\n");

    return 0;
}
