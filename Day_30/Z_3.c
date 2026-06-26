#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 100
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() 
{
    struct Employee emp[MAX_EMPLOYEES];
    int i, searchId, foundIndex, choice, count = 0;
    while (1) 
    {
        printf("\n=== EMPLOYEE MANAGEMENT SYSTEM ===\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                if (count >= MAX_EMPLOYEES)
                    printf("System full! Cannot add more employees.\n");
                else {
                    printf("\nEnter Employee ID: ");
                    scanf("%d", &emp[count].id);  
                    printf("Enter Employee Name (No spaces): ");
                    scanf("%s", emp[count].name);
                    printf("Enter Salary: ");
                    scanf("%f", &emp[count].salary);
                    count++;
                    printf("Employee added successfully!\n");
                }
                break;
            case 2:
                if (count == 0)
                    printf("\nNo records found. Please add employees first.\n");
                else {
                    printf("\n---------------------------------------------\n");
                    printf("%-10s %-20s %-10s\n", "ID", "Name", "Salary");
                    printf("---------------------------------------------\n");
                    for (i = 0; i < count; i++)
                        printf("%-10d %-20s %-10.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                    printf("---------------------------------------------\n");
                }
                break;
            case 3:
                if (count == 0)
                    printf("\nNo records found to search.\n");
                else {
                    printf("\nEnter Employee ID to search: ");
                    scanf("%d", &searchId);
                    foundIndex = -1;
                    for (i = 0; i < count; i++) {
                        if (emp[i].id == searchId) {
                            foundIndex = i;
                            break;
                        }
                    }
                    if (foundIndex != -1) 
                    {
                        printf("\nEmployee Found:\n");
                        printf("ID: %d\n", emp[foundIndex].id);
                        printf("Name: %s\n", emp[foundIndex].name);
                        printf("Salary: %.2f\n", emp[foundIndex].salary);
                    } 
                    else 
                        printf("Employee with ID %d not found.\n", searchId);
                }
                break;
            case 4:
                printf("\nExiting program. Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid selection! Please choose options from 1 to 4.\n");
        }
    }
    return 0;
}