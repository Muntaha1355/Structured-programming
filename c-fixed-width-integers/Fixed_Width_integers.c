#include <stdio.h>
#include <stdint.h>   // Fixed-width integers


int main()
{
    // 8-bit integer
    int8_t a = 100;


    // 16-bit integer
    int16_t b = 30000;


    // 32-bit integer
    int32_t c = 2000000;


    // 64-bit integer
    int64_t d = 9000000000;


    // Printing fixed-width integer values

    printf("8-bit integer: %d\n", a);

    printf("16-bit integer: %d\n", b);

    printf("32-bit integer: %d\n", c);

    printf("64-bit integer: %lld\n", d);


    return 0;
}


/*
Output:

8-bit integer: 100
16-bit integer: 30000
32-bit integer: 2000000
64-bit integer: 9000000000

*/