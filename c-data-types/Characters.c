#include <stdio.h>

int main()
{
    // Character data type stores a single character
    char myGrade = 'A';

    // Printing character value
    printf("%c\n", myGrade);


    // Characters can also be stored using ASCII values
    char a = 65;
    char b = 66;
    char c = 67;

    // Printing ASCII converted characters
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);


    // Storing multiple characters using char array (string)
    char myText[] = "Hello";

    // Printing string value
    printf("%s\n", myText);


    return 0;
}