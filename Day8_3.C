#include <stdio.h>

int main() {
    char str[200], result[200];
    int seen[256] = {0};
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (ch == '\n')
            break;

        if (!seen[ch]) {
            result[j++] = str[i];
            seen[ch] = 1;
        }
    }

    result[j] = '\0';

    printf("After removing duplicates: %s\n", result);

    return 0;
}
