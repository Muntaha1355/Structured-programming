#include <stdio.h>

int main()
{
    // Standard data types
    int normalInt = 1000;
    double normalDouble = 3.14;


    // Extended data types
    short int small = -100;                       // smaller int
    unsigned int count = 25;                      // positive int
    long int big = 1234567890;                    // larger int
    long long int veryBig = 9223372036854775807;  // very large int
    unsigned long long int huge = 18446744073709551615U; // very large, only positive
    long double precise = 3.141592653589793238L;  // extended precision


    // Print values
    printf("Normal int: %d\n", normalInt);
    printf("Normal double: %lf\n", normalDouble);
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Very Big: %lld\n", veryBig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %Lf\n", precise);


    return 0;
}