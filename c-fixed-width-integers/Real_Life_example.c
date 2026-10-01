#include <stdio.h>
#include <stdint.h>   // Fixed-width integers


int main()
{
    // Store battery percentage using 8-bit unsigned integer
    // uint8_t can store values from 0 to 255
    uint8_t battery = 87;


    // Display battery level
    printf("Battery level is %u out of 100\n", battery);


    return 0;
}


/*
Output:

Battery level is 87 out of 100

*/