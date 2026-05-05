#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    char department[30];
};

int main() {
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);2
    struct Employee emp[n];
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Department: ");
        scanf("%s", emp[i].department);
    }
    printf("\n-Employee Details\n");
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("Department: %s\n", emp[i].department);
    }

    return 0;
}