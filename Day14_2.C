#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks\n");
        return 0;
    }

    switch (marks / 10) {
        case 10:
        case 9:
            printf("Grade A\n");
            break;
        case 8:
            printf("Grade B\n");
            break;
        case 7:
            printf("Grade C\n");
            break;
        case 6:
            printf("Grade D\n");
            break;
        default:
            if (marks >= 35)
                printf("Grade E\n");
            else
                printf("Fail\n");
    }

    return 0;
}
