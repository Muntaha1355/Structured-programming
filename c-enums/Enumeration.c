#include <stdio.h>

// Create enum
enum Level {
    LOW,
    MEDIUM,
    HIGH
};

int main()
{
    // Access enum variable
    enum Level myVar = MEDIUM;

    printf("Level value: %d\n", myVar);


    // Change enum values

    enum Status {
        LOW_STATUS = 25,
        MEDIUM_STATUS = 50,
        HIGH_STATUS = 75
    };

    enum Status level = MEDIUM_STATUS;

    printf("Changed value: %d\n", level);


    // Enum in switch statement

    enum Priority {
        LOW_PRIORITY = 1,
        MEDIUM_PRIORITY,
        HIGH_PRIORITY
    };

    enum Priority priority = MEDIUM_PRIORITY;

    switch(priority)
    {
        case 1:
            printf("Low level\n");
            break;

        case 2:
            printf("Medium level\n");
            break;

        case 3:
            printf("High level\n");
            break;
    }


    // typedef with enum

    typedef enum {
        MON,
        TUE,
        WED,
        THU,
        FRI,
        SAT,
        SUN
    } Day;


    Day today = WED;

    if(today == WED)
    {
        printf("It is Wednesday!\n");
    }


    return 0;
}


/*
Output:

Level value: 1
Changed value: 50
Medium level
It is Wednesday!

*/