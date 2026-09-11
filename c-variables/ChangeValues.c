#include <stdio.h>

int main() {

    // Change the value of an existing variable
    int myNum = 15;

    printf("Before change: %d\n", myNum);

    myNum = 10;

    printf("After change: %d\n", myNum);



    // Assign the value of one variable to another
    int firstNum = 15;
    int secondNum = 23;

    firstNum = secondNum;

    printf("Copied value: %d\n", firstNum);



    // Declare a variable without assigning a value
    int newNum;

    newNum = 15;

    printf("Assigned later: %d\n", newNum);



    // Add variables together
    int x = 5;
    int y = 6;

    int sum = x + y;

    printf("Sum: %d\n", sum);



    // Update a variable using its current value
    int number = 5;

    number = number + 1;

    printf("Updated value: %d\n", number);


    return 0;
}