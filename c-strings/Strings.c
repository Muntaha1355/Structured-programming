#include <stdio.h>

int main()
{
    // Strings

    char greetings[] = "Hello World!";

    printf("%s\n", greetings);
    // Output: Hello World!



    // Access Strings

    printf("%c\n", greetings[0]);
    // Output: H



    // Modify Strings

    greetings[0] = 'J';

    printf("%s\n", greetings);
    // Output: Jello World!



    // Loop Through a String

    char carName[] = "Volvo";

    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%c\n", carName[i]);
    }

    /*
    Output:
    V
    o
    l
    v
    o
    */



    // Another Way Of Creating Strings

    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

    printf("%s\n", greetings2);
    // Output: Hello World!



    // Differences

    char greetings1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

    char greetings2[] = "Hello World!";

    printf("%zu\n", sizeof(greetings1));
    printf("%zu\n", sizeof(greetings2));

    // Both output: 13



    // Real-Life Example

    char message[] = "Good to see you, ";

    char fname[] = "John";

    printf("%s%s", message, fname);

    // Output: Good to see you, John



    return 0;
}