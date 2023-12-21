#include <stdio.h>

int main() {
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers:\n", n);
    for ( i = 0; i < n; i++)
	 {
        scanf("%d", &a[i]);
    }
    printf("Numbers in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}

