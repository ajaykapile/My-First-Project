#include <stdio.h>

int main() {
    int choice;
    float value;

    printf("1. Centimeters to meters\n");
    printf("2. Meters to centimeters\n");
    printf("3. Celsius to Fahrenheit\n");
    printf("Select conversion: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            printf("Result = %.2f meters\n", value / 100);
            break;
        case 2:
            printf("Result = %.2f centimeters\n", value * 100);
            break;
        case 3:
            printf("Result = %.2f Fahrenheit\n",
                   (value * 9.0 / 5.0) + 32);
            break;
        default:
            printf("Invalid conversion\n");
    }

    return 0;
}
