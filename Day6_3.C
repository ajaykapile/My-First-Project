#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Transpose of matrix:\n");

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }

    return 0;
}
