#include <stdio.h>

int main()
{
    int battery;

    printf("Enter battery percentage: ");
    scanf("%d", &battery);

    if (battery <= 20)
        printf("Battery LOW - Charge Required!\n");
    else if (battery <= 50)
        printf("Battery MEDIUM\n");
    else
        printf("Battery GOOD\n");

    return 0;
}
