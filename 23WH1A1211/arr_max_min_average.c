#include <stdio.h>

int main() {
    int n,i,a[n];
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; ++i)
	{
        scanf("%d", &a[i]);
    }
    int min = a[0];
    int max = a[0];
    int sum = a[0];
    for ( i = 1; i < n; ++i) {
        if (a[i] < min)
		{
            min = a[i];
        }

        if (a[i] > max) {
            max = a[i];
        }

        sum += a[i];
    }
    double average = (double)sum / n;
    
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2f\n", average);

    return 0;
}

