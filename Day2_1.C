#include <stdio.h>

int main()
{
    int state;

    printf("Enter LED state (1 = ON, 0 = OFF): ");
    scanf("%d", &state);

    if (state == 1)
        printf("LED is ON\n");
    else
        printf("LED is OFF\n");

    return 0;
}
