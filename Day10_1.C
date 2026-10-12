#include <stdio.h>

int main() {
    int n;

    printf("Enter grid size (1-20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Invalid size.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf("%4d", i * j);

        printf("\n");
    }

    return 0;
}
