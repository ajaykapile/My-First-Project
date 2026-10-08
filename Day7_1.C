#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, primary = 0, secondary = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++) {
        primary += matrix[i][i];
        secondary += matrix[i][n - i - 1];
    }

    printf("Primary diagonal sum = %d\n", primary);
    printf("Secondary diagonal sum = %d\n", secondary);

    return 0;
}
