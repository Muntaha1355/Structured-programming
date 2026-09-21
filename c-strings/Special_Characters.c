#include <stdio.h>

int main()
{

    // Special Characters

    // Without escape character it will give error
    // char txt[] = "We are the so-called "Vikings" from the north.";


    // Double Quote (\")
    char txt[] = "We are the so-called \"Vikings\" from the north.";

    printf("%s\n", txt);

    // Output:
    // We are the so-called "Vikings" from the north.



    // Single Quote (\')
    char txt2[] = "It\'s alright.";

    printf("%s\n", txt2);

    // Output:
    // It's alright.



    // Backslash (\\)
    char txt3[] = "The character \\ is called backslash.";

    printf("%s\n", txt3);

    // Output:
    // The character \ is called backslash.



    // Other Escape Characters


    // New Line (\n)
    char txt4[] = "Hello\nWorld";

    printf("%s\n", txt4);

    /*
    Output:
    Hello
    World
    */


    // Tab (\t)
    char txt5[] = "Hello\tWorld";

    printf("%s\n", txt5);

    // Output:
    // Hello    World



    // Null (\0)
    char txt6[] = "Hello\0World";

    printf("%s\n", txt6);

    // Output:
    // Hello


    return 0;
}