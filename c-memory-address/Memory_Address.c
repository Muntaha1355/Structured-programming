#include <stdio.h>

int main() {

    int myAge = 43;

    printf("My age is: %d\n", myAge);

    printf("Memory address of myAge is: %p\n", &myAge);


    return 0;
}

/*
Output:
My age is: 43
Memory address of myAge is: 0x7ffe5367e044
*/