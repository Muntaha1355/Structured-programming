#include <stdio.h>

int main()
{
    int i;

    // Break Example

    for (i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }

        printf("%d\n", i);
    }

    // Output:
    // 0
    // 1
    // 2
    // 3


    // Continue Example

    for (i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }

        printf("%d\n", i);
    }

    // Output:
    // 0
    // 1
    // 2
    // 3
    // 5
    // 6
    // 7
    // 8
    // 9


    // Combining Break and Continue

    for (i = 0; i < 6; i++)
    {
        if (i == 2)
        {
            continue;
        }

        if (i == 4)
        {
            break;
        }

        printf("%d\n", i);
    }

    // Output:
    // 0
    // 1
    // 3


    // Break in While Loop

    i = 0;

    while (i < 10)
    {
        if (i == 4)
        {
            break;
        }

        printf("%d\n", i);
        i++;
    }

    // Output:
    // 0
    // 1
    // 2
    // 3


    // Continue in While Loop

    i = 0;

    while (i < 10)
    {
        i++;

        if (i == 4)
        {
            continue;
        }

        printf("%d\n", i);
    }

    // Output:
    // 1
    // 2
    // 3
    // 5
    // 6
    // 7
    // 8
    // 9


    return 0;
}