#include <stdio.h>

int main()
{
    int speed, increase, finalSpeed;

    printf("Enter motor speed: ");
    scanf("%d", &speed);

    printf("Enter speed increase: ");
    scanf("%d", &increase);

    finalSpeed = speed + increase;

    printf("Final Motor Speed = %d\n", finalSpeed);

    return 0;
}
