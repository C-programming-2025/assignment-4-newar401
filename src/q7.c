#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
    float salary;
};

int main()
{
    struct Employee e[5];
    int max = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    for (int i = 1; i < 5; i++)
        if (e[i].salary > e[max].salary)
            max = i;

    printf("\nHighest Salary Employee\n");
    printf("Name: %s\n", e[max].name);
    printf("ID: %d\n", e[max].id);
    printf("Salary: %.2f\n", e[max].salary);

    return 0;
}
