#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;

    printf("Robot Grid Map\n\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 2 && j == 2)
                printf(" R ");
            else
                printf(" . ");
        }
        printf("\n");
    }

    printf("\nR = Robot, . = Empty cell\n");

    return 0;
}
