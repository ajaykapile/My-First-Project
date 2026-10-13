#include <stdio.h>

int main() {
    int n;

    printf("Enter a number (0-100): ");
    scanf("%d", &n);

    if (n < 0 || n > 100) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        int binary[32], count = 0;
        int temp = i;

        if (temp == 0)
            binary[count++] = 0;

        for (; temp > 0; temp /= 2)
            binary[count++] = temp % 2;

        printf("%d = ", i);

        for (int j = count - 1; j >= 0; j--)
            printf("%d", binary[j]);

        printf("\n");
    }

    return 0;
}
