#include <stdio.h>

int main()
{
    float temperature;

    printf("Enter sensor temperature: ");
    scanf("%f", &temperature);

    if (temperature > 50.0)
        printf("High Temperature Warning\n");
    else
        printf("Temperature is Normal\n");

    return 0;
}
