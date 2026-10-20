#include <stdio.h>

int main() {
    int signal;

    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");
    printf("Enter signal number: ");
    scanf("%d", &signal);

    switch (signal) {
        case 1: printf("STOP\n"); break;
        case 2: printf("WAIT\n"); break;
        case 3: printf("GO\n"); break;
        default: printf("Invalid signal\n");
    }

    return 0;
}
