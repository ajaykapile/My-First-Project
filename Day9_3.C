#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    if (start < 0 || end < start || end > 1000000) {
        printf("Invalid range.\n");
        return 1;
    }

    for (int n = start; n <= end; n++) {
        int temp = n, digits = 0;
        long long sum = 0;

        if (temp == 0)
            digits = 1;

        for (int x = temp; x > 0; x /= 10)
            digits++;

        temp = n;

        for (; temp > 0; temp /= 10) {
            int digit = temp % 10;
            long long power = 1;

            for (int j = 1; j <= digits; j++)
                power *= digit;

            sum += power;
        }

        if (sum == n)
            printf("%d ", n);
    }

    printf("\n");
    return 0;
}
