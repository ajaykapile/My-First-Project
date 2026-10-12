#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows < 2 || cols < 2 || rows > 30 || cols > 30) {
        printf("Enter dimensions between 2 and 30.\n");
        return 1;
    }

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows ||
                j == 1 || j == cols)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}
