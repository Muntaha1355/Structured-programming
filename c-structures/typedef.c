#include <stdio.h>

// Create typedef for float
typedef float Temperature;

// typedef with structure
typedef struct
{
    char brand[30];
    int year;
} Car;

// typedef with nested structure

typedef struct
{
    char firstName[20];
    char lastName[20];
} Owner;

typedef struct
{
    char brand[20];
    int year;
    Owner owner;
} Vehicle;


int main()
{
    // Basic typedef example

    Temperature today = 25.5;
    Temperature tomorrow = 18.6;


    // Multiple structure variables using typedef

    Car car1 = {"BMW", 1999};
    Car car2 = {"Ford", 1969};
    Car car3 = {"Toyota", 2011};


    // Nested structure example

    Owner person = {"John", "Doe"};

    Vehicle car = {"Toyota", 2010, person};



    printf("Today: %.1f\n", today);
    printf("Tomorrow: %.1f\n", tomorrow);

    printf("%s %d\n", car1.brand, car1.year);
    printf("%s %d\n", car2.brand, car2.year);
    printf("%s %d\n", car3.brand, car3.year);

    printf("Vehicle: %s (%d), Owner: %s %s\n",
           car.brand,
           car.year,
           car.owner.firstName,
           car.owner.lastName);


    return 0;
}


/*
Output:

Today: 25.5
Tomorrow: 18.6
BMW 1999
Ford 1969
Toyota 2011
Vehicle: Toyota (2010), Owner: John Doe

*/