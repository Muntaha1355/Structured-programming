#include <stdio.h>

int main()
{
    // Constant value
    const int myNum = 15;

    printf("My number is: %d\n", myNum); // Output: 15


    // Constants should be assigned when declared
    const int minutesPerHour = 60;
    const int monthsInYear = 12;

    printf("Minutes per hour: %d\n", minutesPerHour); // Output: 60
    printf("Months in year: %d\n", monthsInYear);     // Output: 12


    // Good practice: use uppercase for constants
    const int BIRTHYEAR = 1980;

    printf("Birth year: %d\n", BIRTHYEAR); // Output: 1980


    return 0;
}