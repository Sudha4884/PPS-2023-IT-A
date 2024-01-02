#include <stdio.h>

int BinarySearch(int A[], int num, int key);
void ReadArray(int B[], int noe);

int main() {
    int n;
    int A[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    ReadArray(A, n);

    printf("Entered array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    int k;
    printf("\nEnter element to be searched: ");
    scanf("%d", &k);

    int result = BinarySearch(A, n, k);

    if (result != -1) {
        printf("\nElement %d found at index %d.\n", k, result);
    } else {
        printf("\nElement %d not found.\n", k);
    }

    return 0;
}

void ReadArray(int B[], int noe) {
    for (int i = 0; i < noe; i++) {
        scanf("%d", &B[i]);
    }
}

int BinarySearch(int A[], int num, int key) {
    int low = 0;
    int high = num - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (A[mid] == key) {
            return mid;  // Element found
        } else if (A[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Element not found
}
