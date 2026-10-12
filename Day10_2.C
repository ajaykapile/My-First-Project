#include <stdio.h>

int main() {
    int n;

    printf("Enter a number (1-10000): ");
    scanf("%d", &n);

    if (n < 1 || n > 10000) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        int temp = i, sum = 0;

        for (; temp > 0; temp /= 10)
            sum += temp % 10;

        printf("Digit sum of %d = %d\n", i, sum);
    }

    return 0;
}
