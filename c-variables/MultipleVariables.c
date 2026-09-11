#include <stdio.h>

int main() {

    // Declare multiple variables of the same type
    int x = 5, y = 6, z = 50;

    printf("%d\n", x + y + z);


    // Assign the same value to multiple variables
    int a, b, c;

    a = b = c = 50;

    printf("%d\n", a + b + c);


    return 0;
}