#include <stdio.h>
#include <time.h>

int main()
{
    // Get current time
    time_t currentTime;
    currentTime = time(NULL);


    // Check if time is available
    if (currentTime == -1)
    {
        printf("Unable to get current time\n");
        return 1;
    }


    // Convert time into local time structure
    struct tm *local = localtime(&currentTime);


    // Display complete current time
    printf("Current Date and Time:\n");
    printf("%s\n", ctime(&currentTime));


    // Display individual date and time parts
    printf("\nDate Details:\n");

    printf("Year   : %d\n", local->tm_year + 1900);
    printf("Month  : %d\n", local->tm_mon + 1);
    printf("Day    : %d\n", local->tm_mday);


    printf("\nTime Details:\n");

    printf("Hour   : %d\n", local->tm_hour);
    printf("Minute : %d\n", local->tm_min);
    printf("Second : %d\n", local->tm_sec);



    // Format date and time
    char formatted[100];

    strftime(
        formatted,
        sizeof(formatted),
        "%Y-%m-%d %H:%M:%S",
        local
    );


    printf("\nFormatted Time:\n");
    printf("%s\n", formatted);


    return 0;
}