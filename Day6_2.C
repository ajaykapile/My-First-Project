#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b, g;
    long long lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    g = gcd(a, b);
    lcm = (long long)a / g * b;

    printf("GCD = %d\n", g);
    printf("LCM = %lld\n", lcm);

    return 0;
}
