// Do While Loop Examples

#include <stdio.h>

int main()
{
    // Basic Do While Loop Example

    int i = 0;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while (i < 5);


    // Output:
    // 0
    // 1
    // 2
    // 3
    // 4



    // Condition is False From The Start

    int number = 10;

    do
    {
        printf("Number is %d\n", number);
        number++;
    }
    while (number < 5);


    // Output:
    // Number is 10



    // Practical Example: User Input

    int value;

    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &value);

    }
    while (value > 0);


    // Output Example:
    // Enter a positive number: 5
    // Enter a positive number: 3
    // Enter a positive number: 0


    return 0;
}