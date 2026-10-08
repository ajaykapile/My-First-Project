#include <stdio.h>

int main() {
    int a[100], n, k;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter rotation count: ");
    scanf("%d", &k);

    k = k % n;

    printf("Rotated array:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", a[(n - k + i) % n]);

    return 0;
}
