#include <stdio.h>

#define SIZE 5

struct Company
{
    char companyName[50];
    char address[100];
    int employeeCount;
};

struct Employee
{
    int employeeID;
    char employeeName[50];
    int age;
    float salary;
    char designation[50];
    char department[50];
};

int main()
{
    struct Company company;
    struct Employee staff[SIZE];

    int option, id, i, isFound;

    printf("Enter company name: ");
    scanf(" %49[^\n]", company.companyName);

    printf("Enter company address: ");
    scanf(" %99[^\n]", company.address);

    company.employeeCount = SIZE;

    for (i = 0; i < SIZE; i++)
    {
        printf("\nEmployee %d Information\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &staff[i].employeeID);

        printf("Enter name: ");
        scanf(" %49[^\n]", staff[i].employeeName);

        printf("Enter age: ");
        scanf("%d", &staff[i].age);

        printf("Enter salary: ");
        scanf("%f", &staff[i].salary);

        printf("Enter designation: ");
        scanf(" %49[^\n]", staff[i].designation);

        printf("Enter department: ");
        scanf(" %49[^\n]", staff[i].department);
    }

    do
    {
        printf("\n--- MAIN MENU ---\n");
        printf("1. Find an employee\n");
        printf("2. Show company details\n");
        printf("0. Close program\n");
        printf("Select an option: ");
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Enter employee ID: ");
            scanf("%d", &id);

            isFound = 0;

            for (i = 0; i < SIZE; i++)
            {
                if (staff[i].employeeID == id)
                {
                    printf("\nEmployee Information\n");
                    printf("ID: %d\n", staff[i].employeeID);
                    printf("Name: %s\n", staff[i].employeeName);
                    printf("Age: %d\n", staff[i].age);
                    printf("Salary: %.2f\n", staff[i].salary);
                    printf("Designation: %s\n", staff[i].designation);
                    printf("Department: %s\n", staff[i].department);

                    isFound = 1;
                    break;
                }
            }

            if (isFound == 0)
            {
                printf("No employee found with this ID.\n");
            }
        }
        else if (option == 2)
        {
            printf("\nCompany Details\n");
            printf("Name: %s\n", company.companyName);
            printf("Address: %s\n", company.address);
            printf("Number of employees: %d\n",
                   company.employeeCount);
        }
        else if (option == 0)
        {
            printf("Program terminated.\n");
        }
        else
        {
            printf("Invalid option. Please try again.\n");
        }

    } while (option != 0);

    return 0;
}