#include <stdio.h>

int main() {

    // Create an int variable
    int myAge = 43;

    // Create a pointer variable
    int* ptr = &myAge;


    // Output the value of myAge
    printf("%d\n", myAge);

    // Output the memory address of myAge
    printf("%p\n", &myAge);

    // Output the memory address of myAge with pointer
    printf("%p\n", ptr);

    // Dereference: Output the value of myAge with pointer
    printf("%d\n", *ptr);


    return 0;
}

/*

Output:

43
0x7ffe5367e044
0x7ffe5367e044
43

*/