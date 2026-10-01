#include <stdio.h>


int main()
{
    // Bitwise AND (&)
    int a = 6;      // 0110
    int b = 3;      // 0011

    int andResult = a & b;
    printf("AND Result: %d\n", andResult);


    // Bitwise OR (|)
    int orResult = a | b;
    printf("OR Result: %d\n", orResult);


    // Bitwise XOR (^)
    int xorResult = a ^ b;
    printf("XOR Result: %d\n", xorResult);


    // Bitwise NOT (~)
    int c = 5;      // 00000101

    int notResult = ~c;
    printf("NOT Result: %d\n", notResult);


    // Left Shift (<<)
    int x = 3;      // 00000011

    int leftShift = x << 2;
    printf("Left Shift Result: %d\n", leftShift);


    // Right Shift (>>)
    int y = 12;     // 00001100

    int rightShift = y >> 2;
    printf("Right Shift Result: %d\n", rightShift);


    return 0;
}


/*
Output:

AND Result: 2
OR Result: 7
XOR Result: 5
NOT Result: -6
Left Shift Result: 12
Right Shift Result: 3

*/