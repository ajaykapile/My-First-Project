#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, zeros = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] == 0)
                zeros++;
        }
    }

    if (zeros > (rows * cols) / 2)
        printf("Matrix is a Sparse Matrix.\n");
    else
        printf("Matrix is not a Sparse Matrix.\n");

    return 0;
}
