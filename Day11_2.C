#include <stdio.h>

int main() {
    int a[100], n, target, found = 0;

    printf("Enter array size (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((long long)a[i] + a[j] == target) {
                printf("%d + %d = %d\n",
                       a[i], a[j], target);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No matching pairs found.\n");

    return 0;
}
