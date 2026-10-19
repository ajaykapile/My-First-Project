#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    ch = tolower((unsigned char)ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel\n");
            break;
        default:
            if (ch >= 'a' && ch <= 'z')
                printf("Consonant\n");
            else
                printf("Not an alphabet\n");
    }

    return 0;
}
