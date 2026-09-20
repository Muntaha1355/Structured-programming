// While Loop Examples

#include <stdio.h>

int main()
{
    // Basic While Loop Example

    int i = 0;

    while (i < 5)
    {
        printf("%d\n", i);
        i++;
    }

    // Output:
    // 0
    // 1
    // 2
    // 3
    // 4



    // Countdown Example

    int countdown = 3;

    while (countdown > 0)
    {
        printf("%d\n", countdown);
        countdown--;
    }

    printf("Happy New Year!!\n");

    // Output:
    // 3
    // 2
    // 1
    // Happy New Year!!



    // While Loop With False Condition

    int number = 10;

    while (number < 5)
    {
        printf("This will never be printed\n");
        number++;
    }

    // Output:
    // No output


    return 0;
}