#include <stdio.h>

struct organisation
{
    char name[50];
    char location[100];
    int totalEmployees;
};

struct employee
{
    int age;
    float salary;
    int id;
    char name[50];
    char post[50];
    char department[60];
};

int main()
{
    struct organisation org;
    struct employee emp[5];
    int searchID, found = 0, choice;

    printf("Enter Company Name: ");
    scanf(" %[^\n]", org.name);

    printf("Enter Company Location: ");
    scanf(" %[^\n]", org.location);

    org.totalEmployees = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Post: ");
        scanf(" %[^\n]", emp[i].post);

        printf("Department: ");
        scanf(" %[^\n]", emp[i].department);
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Search Employee by ID\n");
        printf("2. Display Company Information\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &searchID);

                found = 0;

                for (int i = 0; i < 5; i++)
                {
                    if (searchID == emp[i].id)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Age: %d\n", emp[i].age);
                        printf("Salary: %.2f\n", emp[i].salary);
                        printf("Post: %s\n", emp[i].post);
                        printf("Department: %s\n", emp[i].department);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("\nEmployee not found.\n");
                }
                break;

            case 2:
                printf("\n===== Company Information =====\n");
                printf("Company Name: %s\n", org.name);
                printf("Location: %s\n", org.location);
                printf("Total Employees: %d\n", org.totalEmployees);
                break;

            case 0:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}