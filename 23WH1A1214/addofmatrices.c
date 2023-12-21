#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int row, col;

   
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &row, &col);

    if (row > MAX_ROWS || col > MAX_COLS) {
        printf("Error: Matrix dimensions exceed the maximum limit.\n");
        return 1; 
    }

 
    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];

    
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < row; ++i) {
  
       for (int j = 0; j < col; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
