#include <stdio.h>

int main() {
    int n, choice;
    float numbers[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Find the smallest number\n");
        printf("2. Find the largest number\n");
        printf("3. Calculate the sum of the numbers\n");
        printf("4. Calculate the average of the numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                float smallest = numbers[0];
                for (int i = 1; i < n; i++) {
                    if (numbers[i] < smallest) {
                        smallest = numbers[i];
                    }
                }
                printf("The smallest number is: %.2f\n", smallest);
                break;
            }
            case 2: {
                float largest = numbers[0];
                for (int i = 1; i < n; i++) {
                    if (numbers[i] > largest) {
                        largest = numbers[i];
                    }
                }
                printf("The largest number is: %.2f\n", largest);
                break;
            }
            case 3: {
                float sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += numbers[i];
                }
                printf("The sum of the numbers is: %.2f\n", sum);
                break;
            }
            case 4: {
                float sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += numbers[i];
                }
                float average = sum / n;
                printf("The average of the numbers is: %.2f\n", average);
                break;
            }
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
                break;
        }
    }
    while (choice != 5);

    return 0;
}
