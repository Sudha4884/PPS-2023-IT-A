#include <stdio.h>

int main() {
    int n;

    // Get the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Read elements into the array using pointers
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", arr + i);
    }

    // Display the values in the array
    printf("\nValues in the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

