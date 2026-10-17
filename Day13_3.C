#include <stdio.h>

int main() {
    int choice;

    printf("1. Forward\n");
    printf("2. Backward\n");
    printf("3. Turn Left\n");
    printf("4. Turn Right\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Robot moves forward\n"); break;
        case 2: printf("Robot moves backward\n"); break;
        case 3: printf("Robot turns left\n"); break;
        case 4: printf("Robot turns right\n"); break;
        default: printf("Invalid movement choice\n");
    }

    return 0;
}
