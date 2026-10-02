#include <stdio.h>

int main()
{
    float distance;

    printf("Enter distance in cm: ");
    scanf("%f", &distance);

    if (distance < 20)
        printf("Obstacle Detected!\n");
    else
        printf("Path Clear.\n");

    return 0;
}
