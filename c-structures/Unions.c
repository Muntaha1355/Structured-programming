#include <stdio.h>


// Create a union

union MyUnion
{
    int myNum;
    char myLetter;
    char myString[36];
};



int main()
{

    // Create union variable

    union MyUnion u1;



    // Assign value to union member

    u1.myNum = 1000;

    printf("Number: %d\n", u1.myNum);



    // Changing another member overwrites previous value

    u1.myLetter = 'A';

    printf("Letter: %c\n", u1.myLetter);



    // Store string value

    strcpy(u1.myString, "Hello Union");

    printf("String: %s\n", u1.myString);



    // Size of union

    printf("Size of union: %zu bytes\n", sizeof(u1));



    return 0;
}


/*

Output:

Number: 1000
Letter: A
String: Hello Union
Size of union: 36 bytes

*/