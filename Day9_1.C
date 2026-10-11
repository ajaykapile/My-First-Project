#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    if (rows < 1 || rows > 20) {
        printf("Invalid number of rows.\n");
        return 1;
    }

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}
