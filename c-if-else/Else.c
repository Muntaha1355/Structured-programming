#include <stdio.h>
#include <stdbool.h>

int main()
{
    int time = 20;

    if (time < 18)
    {
        printf("Good day.");
    }
    else
    {
        printf("Good evening.");
    }

    // Using a boolean variable

    bool isDay = time < 18;

    if (isDay)
    {
        printf("\nGood day.");
    }
    else
    {
        printf("\nGood evening.");
    }

    return 0;
}