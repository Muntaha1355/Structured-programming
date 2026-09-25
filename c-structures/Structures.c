#include <stdio.h>
#include <string.h>


// Structure declaration

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};


// Real-life structure

struct Car {
    char brand[30];
    char model[30];
    int year;
};


int main()
{

    // Create structure variable

    struct myStructure s1;


    // Access structure members

    s1.myNum = 13;
    s1.myLetter = 'B';
    strcpy(s1.myString, "Some text");


    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);



    // Multiple structure variables

    struct myStructure s2;
    struct myStructure s3;


    s2.myNum = 20;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Second text");


    s3.myNum = 30;
    s3.myLetter = 'D';
    strcpy(s3.myString, "Third text");


    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
    printf("%d %c %s\n", s3.myNum, s3.myLetter, s3.myString);



    // Simple syntax initialization

    struct myStructure s4 = {50, 'E', "Simple syntax"};

    printf("%d %c %s\n", s4.myNum, s4.myLetter, s4.myString);



    // Copy structure

    struct myStructure s5;

    s5 = s1;

    printf("%d %c %s\n", s5.myNum, s5.myLetter, s5.myString);



    // Modify values

    s5.myNum = 100;
    s5.myLetter = 'Z';
    strcpy(s5.myString, "Modified data");


    printf("%d %c %s\n", s5.myNum, s5.myLetter, s5.myString);



    // Real-life example

    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"Ford", "Mustang", 1969};
    struct Car car3 = {"Toyota", "Corolla", 2011};


    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);


    return 0;
}