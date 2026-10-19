#include <stdio.h>

int main() {
    int mode;

    printf("1. Idle Mode\n");
    printf("2. Automatic Mode\n");
    printf("3. Manual Mode\n");
    printf("4. Emergency Stop\n");
    printf("Select mode: ");
    scanf("%d", &mode);

    switch (mode) {
        case 1: printf("Robot is idle\n"); break;
        case 2: printf("Automatic mode selected\n"); break;
        case 3: printf("Manual mode selected\n"); break;
        case 4: printf("Emergency stop selected\n"); break;
        default: printf("Invalid mode\n");
    }

    return 0;
}
