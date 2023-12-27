#include <stdio.h>
#include <math.h>

double calculateMean(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

double calculateVariance(int arr[], int n, double mean) 
{
    double variance = 0;
    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    return variance / n;
}

double calculateStandardDeviation(double variance)
{
    return sqrt(variance);
}

void sortArray(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Please enter a valid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double mean = calculateMean(arr, n);
    double variance = calculateVariance(arr, n, mean);
    double standardDeviation = calculateStandardDeviation(variance);

    printf("Mean: %.2lf\n", mean);
    printf("Variance: %.2lf\n", variance);
    printf("Standard Deviation: %.2lf\n", standardDeviation);

    printf("Array after sorting: ");
    sortArray(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
