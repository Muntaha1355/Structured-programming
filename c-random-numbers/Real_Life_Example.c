#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Set current time as seed
    // It makes random numbers different every time
    srand(time(NULL));


    // Generate first dice value
    // rand() % 6 gives 0-5, adding 1 makes it 1-6
    int dice1 = (rand() % 6) + 1;


    // Generate second dice value
    int dice2 = (rand() % 6) + 1;


    // Print both dice results and their total
    printf("You rolled %d and %d (total = %d)\n",
           dice1, dice2, dice1 + dice2);


    return 0;
}