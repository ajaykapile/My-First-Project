#include <stdio.h>

int main()
{
    int leftSensor, rightSensor;

    printf("Enter left sensor (0/1): ");
    scanf("%d", &leftSensor);

    printf("Enter right sensor (0/1): ");
    scanf("%d", &rightSensor);

    if (leftSensor == 1 && rightSensor == 1)
        printf("Robot moves FORWARD\n");
    else if (leftSensor == 1 && rightSensor == 0)
        printf("Robot turns LEFT\n");
    else if (leftSensor == 0 && rightSensor == 1)
        printf("Robot turns RIGHT\n");
    else
        printf("Robot STOPS\n");

    return 0;
}
