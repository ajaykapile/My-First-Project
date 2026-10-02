#include <stdio.h>

int main()
{
    int distance, wheelCircumference, rotations;

    printf("Enter distance travelled: ");
    scanf("%d", &distance);

    printf("Enter wheel circumference: ");
    scanf("%d", &wheelCircumference);

    rotations = distance / wheelCircumference;

    printf("Wheel rotations = %d\n", rotations);

    return 0;
}
