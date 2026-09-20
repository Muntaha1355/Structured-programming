#include <stdio.h>

int main()
{
    // Loop Through an Array (Fixed Size)

    int myNumbers[] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }

    // Output:
    // 25
    // 50
    // 75
    // 100


    // Making Better Loops using sizeof()

    int numbers[] = {25, 50, 75, 100};

    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (i = 0; i < length; i++)
    {
        printf("%d\n", numbers[i]);
    }

    // Output:
    // 25
    // 50
    // 75
    // 100


    return 0;
}