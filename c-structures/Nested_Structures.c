#include <stdio.h>


// First structure

struct Owner
{
    char firstName[30];
    char lastName[30];
};


// Nested structure

struct Car
{
    char brand[30];
    int year;
    struct Owner owner;
};


int main()
{

    // Create owner structure variable

    struct Owner person = {"John", "Doe"};


    // Create car structure with nested structure

    struct Car car1 = {"Toyota", 2010, person};



    // Access normal structure members

    printf("Car: %s (%d)\n", car1.brand, car1.year);



    // Access nested structure members

    printf("Owner: %s %s\n",
           car1.owner.firstName,
           car1.owner.lastName);



    return 0;
}


/*

Output:

Car: Toyota (2010)
Owner: John Doe

*/