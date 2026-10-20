#include <stdio.h>

int main() {
    int choice, a, b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Modulus\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            printf("Sum = %d\n", a + b);
            break;
        case 2:
            printf("Difference = %d\n", a - b);
            break;
        case 3:
            printf("Product = %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Remainder = %d\n", a % b);
            else
                printf("Modulus by zero is undefined\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
