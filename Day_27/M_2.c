#include <stdio.h>
struct Employee 
{
    int id;
    char name[30];
    float salary;
};
int main() 
{
    struct Employee emp[100];
    int n;
    printf("How many employees do you want to enter? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        printf("\n--- Enter Details for Employee %d ---\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Name (Single word): ");
        scanf("%s", emp[i].name);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\n====================================\n");
    printf("         EMPLOYEE RECORDS           \n");
    printf("====================================\n");
    for (int i = 0; i < n; i++) 
        printf("ID: %d | Name: %s | Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    return 0;
}