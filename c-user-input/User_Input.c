#include <stdio.h>

int main() {


    // Output a number entered by the user

    // Create an integer variable that will store the number
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d\n", myNum);



    // Multiple Inputs

    // Create an int and a char variable
    int myNum2;
    char myChar;

    // Ask the user to type a number AND a character
    printf("Type a number AND a character and press enter: \n");

    // Get and save the number AND character
    scanf("%d %c", &myNum2, &myChar);

    // Print the number
    printf("Your number is: %d\n", myNum2);

    // Print the character
    printf("Your character is: %c\n", myChar);



    // Take String Input

    // Create a string
    char firstName[30];

    // Ask the user to input some text
    printf("Enter your first name: \n");

    // Get and save the text
    scanf("%s", firstName);

    // Output the text
    printf("Hello %s\n", firstName);



    // scanf() limitation with spaces

    char fullName[30];

    printf("Type your full name: \n");

    scanf("%s", fullName);

    printf("Hello %s\n", fullName);



    return 0;
}