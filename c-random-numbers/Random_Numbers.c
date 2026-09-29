#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Generate a basic random number
    int r = rand();

    printf("%d\n", r);


    // Set current time as seed
    // It gives different random numbers every time
    srand(time(NULL));


    // Generate random numbers
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());


    // Generate random number in a range
    // rand() % 10 gives numbers from 0 to 9
    int x = rand() % 10;

    printf("%d\n", x);


    return 0;
}