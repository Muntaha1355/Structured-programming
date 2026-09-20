#include <stdio.h>
#include <stdbool.h>

int main()
{
    int time = 16;

    // Using else if statement
    if (time < 12)
    {
        printf("Good morning.");
    }
    else if (time < 18)
    {
        printf("Good day.");
    }
    else
    {
        printf("Good evening.");
    }

    // Using Boolean Variables
    bool isMorning = time < 12;
    bool isDay = time < 18;

    if (isMorning)
    {
        printf("\nGood morning.");
    }
    else if (isDay)
    {
        printf("\nGood day.");
    }
    else
    {
        printf("\nGood evening.");
    }

    return 0;
}