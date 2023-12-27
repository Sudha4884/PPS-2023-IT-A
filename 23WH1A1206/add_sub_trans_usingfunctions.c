#include <stdio.h>
#include <stdlib.h>
void displayMatrix(int **matrix, int rows, int cols) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int **addMatrices(int **matrix1, int **matrix2, int rows, int cols) 
{
    int **result = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) 
    {
        result[i] = (int *)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

int **multiplyMatrices(int **matrix1, int rows1, int cols1, int **matrix2, int rows2, int cols2)
{
    if (cols1 != rows2)
    {
        printf("Matrices cannot be multiplied. Invalid dimensions.\n");
        return NULL;
    }

    int **result = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) 
    {
        result[i] = (int *)malloc(cols2 * sizeof(int));
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

int **transposeMatrix(int **matrix, int rows, int cols) 
{
    int **result = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++) 
    {
        result[i] = (int *)malloc(rows * sizeof(int));
        for (int j = 0; j < rows; j++) 
        {
            result[i][j] = matrix[j][i];
        }
    }
    return result;
}

void deallocateMatrix(int **matrix, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

int main()
{
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (rows1 <= 0 || cols1 <= 0 || rows2 <= 0 || cols2 <= 0)
    {
        printf("Please enter valid dimensions for matrices.\n");
        return 1;
    }

    if (rows1 != rows2 || cols1 != cols2) 
    {
        printf("Matrices should have the same dimensions for addition. Exiting.\n");
        return 1;
    }

    int **matrix1 = (int **)malloc(rows1 * sizeof(int *));
    int **matrix2 = (int **)malloc(rows2 * sizeof(int *));

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) 
    {
        matrix1[i] = (int *)malloc(cols1 * sizeof(int));
        for (int j = 0; j < cols1; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        matrix2[i] = (int *)malloc(cols2 * sizeof(int));
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int **sumMatrix = addMatrices(matrix1, matrix2, rows1, cols1);
    printf("Result of addition:\n");
    displayMatrix(sumMatrix, rows1, cols1);
    deallocateMatrix(sumMatrix, rows1);

    int **productMatrix = multiplyMatrices(matrix1, rows1, cols1, matrix2, rows2, cols2);
    if (productMatrix != NULL) 
    {
        printf("Result of multiplication:\n");
        displayMatrix(productMatrix, rows1, cols2);
        deallocateMatrix(productMatrix, rows1);
    }

    int **transposedMatrix = transposeMatrix(matrix1, rows1, cols1);
    printf("Transpose of first matrix:\n");
    displayMatrix(transposedMatrix, cols1, rows1);
    deallocateMatrix(transposedMatrix, cols1);

    deallocateMatrix(matrix1, rows1);
    deallocateMatrix(matrix2, rows2);

    return 0;
}
