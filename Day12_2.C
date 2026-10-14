#include <stdio.h>

int main() {
    printf("Servo Motor Position Control Simulation\n");

    for (int position = 0; position <= 180; position += 45) {
        printf("Servo position: %d degrees\n", position);
    }

    printf("Servo position test completed.\n");

    return 0;
}
