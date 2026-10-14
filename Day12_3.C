#include <stdio.h>

int main() {
    int sensor[] = {1, 1, 0, 0, 1, 0, 1};

    printf("Line Following Robot Simulation\n");

    for (int i = 0; i < 7; i++) {
        printf("Sensor %d: ", i + 1);

        if (sensor[i] == 1)
            printf("Line detected\n");
        else
            printf("No line detected\n");
    }

    return 0;
}
