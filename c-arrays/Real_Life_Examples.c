#include <stdio.h>

int main()
{
    // Real-Life Example 1:
    // Calculate average age

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;

    int length = sizeof(ages) / sizeof(ages[0]);

    int i;

    for (i = 0; i < length; i++)
    {
        sum += ages[i];
    }

    avg = sum / length;

    printf("The average age is: %.2f\n", avg);

    // Output:
    // The average age is: 40.75



    // Real-Life Example 2:
    // Find the lowest age

    int ages2[] = {20, 22, 18, 35, 48, 26, 87, 70};

    int lowestAge = ages2[0];

    int size = sizeof(ages2) / sizeof(ages2[0]);

    for (i = 0; i < size; i++)
    {
        if (lowestAge > ages2[i])
        {
            lowestAge = ages2[i];
        }
    }

    printf("The lowest age is: %d\n", lowestAge);

    // Output:
    // The lowest age is: 18



    // Real-Life Example 3:
    // Skip negative numbers and stop when zero is found

    int numbers[] = {3, -1, 7, 0, 9};

    int numLength = sizeof(numbers) / sizeof(numbers[0]);

    for (i = 0; i < numLength; i++)
    {
        if (numbers[i] < 0)
        {
            continue;   // Skip negative numbers
        }

        if (numbers[i] == 0)
        {
            break;      // Stop loop when zero is found
        }

        printf("%d\n", numbers[i]);
    }

    // Output:
    // 3
    // 7


    return 0;
}