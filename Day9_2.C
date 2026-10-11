#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a number from 1 to 20: ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Please enter a number from 1 to 20.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        printf("%d! = %llu\n", i, factorial);
    }

    return 0;
}
