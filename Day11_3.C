#include <stdio.h>

int main() {
    int size;

    printf("Enter board size (1-30): ");
    scanf("%d", &size);

    if (size < 1 || size > 30) {
        printf("Invalid size.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i + j) % 2 == 0)
                printf("X ");
            else
                printf("O ");
        }

        printf("\n");
    }

    return 0;
}
