#include <stdio.h>
#include <string.h>

int main() {

    // String Functions
    // To use string functions, include:
    // #include <string.h>


    // String Length
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet));

    // Output:
    // 26



    // Difference between strlen() and sizeof()
    char alphabet2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet2));   // 26
    printf("%zu\n", sizeof(alphabet2));   // 27

    // Output:
    // 26
    // 27



    // sizeof() returns memory size, not actual string length
    char alphabet3[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet3));   // 26
    printf("%zu\n", sizeof(alphabet3));   // 50

    // Output:
    // 26
    // 50



    // Concatenate Strings
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Print str1
    printf("%s\n", str1);

    // Output:
    // Hello World!



    // Copy Strings
    char copyStr1[20] = "Hello World!";
    char copyStr2[20];

    // Copy copyStr1 to copyStr2
    strcpy(copyStr2, copyStr1);

    // Print copyStr2
    printf("%s\n", copyStr2);

    // Output:
    // Hello World!



    // Compare Strings
    char cmpStr1[] = "Hello";
    char cmpStr2[] = "Hello";
    char cmpStr3[] = "Hi";

    // Compare cmpStr1 and cmpStr2, and print the result
    printf("%d\n", strcmp(cmpStr1, cmpStr2));   // Returns 0 (the strings are equal)

    // Compare cmpStr1 and cmpStr3, and print the result
    printf("%d\n", strcmp(cmpStr1, cmpStr3));   // Returns -4 (the strings are not equal)

    // Output:
    // 0
    // -4


    return 0;
}