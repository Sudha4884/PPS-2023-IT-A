#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    int sum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

    // Calculate average
    double average = (double)sum / n;

    // Display the results
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %lf\n", average);

    return 0;
}
