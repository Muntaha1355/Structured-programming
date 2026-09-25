#include <stdio.h>


// Create a structure

struct Car
{
    char brand[30];
    int year;
};


// Function that takes struct pointer

void updateYear(struct Car *c)
{
    c->year = 2025;
}



int main()
{

    // Create structure variable

    struct Car myCar = {"Toyota", 2020};



    // Create pointer to structure

    struct Car *ptr = &myCar;



    // Access structure members using -> operator

    printf("Brand: %s\n", ptr->brand);

    printf("Year: %d\n", ptr->year);



    // Pass structure pointer to function

    updateYear(&myCar);



    // Print updated value

    printf("Updated Year: %d\n", myCar.year);



    return 0;
}


/*

Output:

Brand: Toyota
Year: 2020
Updated Year: 2025

*/