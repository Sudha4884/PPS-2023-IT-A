#include <stdio.h>

void printMatrix(int n, double matrix[][n]) {
 for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void swapRows(int n, double matrix[][n], int row1, int row2) {
    for (int i = 0; i < n; i++) {
        double temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }
}

void scaleRow(int n, double matrix[][n], int row, double scalar) {
    for (int i = 0; i < n; i++) {
        matrix[row][i] *= scalar;
    }
}

void addScaledRow(int n, double matrix[][n], int row1, int row2, double scalar) {
    for (int i = 0; i < n; i++) {
        matrix[row1][i] += scalar * matrix[row2][i];
    }
}

int gaussJordanInverse(int n, double matrix[][n], double inverse[][n]) {
    // Initialize the augmented matrix [matrix | I]
    double augmentedMatrix[n][2 * n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            augmentedMatrix[i][j] = matrix[i][j];
            augmentedMatrix[i][j + n] = (i == j) ? 1.0 : 0.0;
        }
    }

    // Apply Gauss-Jordan elimination
    for (int i = 0; i < n; i++) {
        // Make the diagonal element 1
        double diagElement = augmentedMatrix[i][i];
        if (diagElement == 0) {
            // Matrix is singular, cannot find inverse
            return 0;
        }
        scaleRow(2 * n, augmentedMatrix, i, 1.0 / diagElement);

        // Eliminate other rows
        for (int j = 0; j < n; j++) {
            if (j != i) {
                addScaledRow(2 * n, augmentedMatrix, j, i, -augmentedMatrix[j][i]);
            }
        }
    }

    // Extract the inverse matrix from the augmented matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inverse[i][j] = augmentedMatrix[i][j + n];
        }
    }

    return 1; // Inverse found successfully
}

int main() {
    // Example usage
    int n = 3; // Size of the matrix
    double matrix[3][3] = {{2, -1, 0}, {-1, 2, -1}, {0, -1, 2}};
    double inverse[3][3];

    printf("Original Matrix:\n");
    printMatrix(n, matrix);

    int result = gaussJordanInverse(n, matrix, inverse);

    if (result) {
        printf("\nInverse Matrix:\n");
        printMatrix(n, inverse);
    } else {
        printf("\nMatrix is singular. Inverse does not exist.\n");
    }

    return 0;
}

