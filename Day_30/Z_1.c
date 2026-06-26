#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
struct Student 
{
    int roll_number;
    char name[50];
    float marks;
};
int main() 
{
    struct Student students[MAX_STUDENTS];
    int total_students = 0, choice, search_roll, i, found;
    while (1) 
    {
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                if (total_students >= MAX_STUDENTS)
                    printf("\nError: System storage full!\n");
                else 
                {
                    printf("\nEnter Roll Number: ");
                    scanf("%d", &students[total_students].roll_number);
                    while (getchar() != '\n'); 
                    printf("Enter Student Name: ");
                    fgets(students[total_students].name, sizeof(students[total_students].name), stdin);
                    students[total_students].name[strcspn(students[total_students].name, "\n")] = '\0';
                    printf("Enter Marks: ");
                    scanf("%f", &students[total_students].marks);
                    total_students++;
                    printf("\nRecord added successfully!\n");
                }
                break;
            case 2:
                if (total_students == 0)
                    printf("\nNo records available to display.\n");
                else 
                {
                    printf("\n-------------------------------------------------\n");
                    printf("%-10s %-25s %-10s\n", "Roll No", "Name", "Marks");
                    for (i = 0; i < total_students; i++) 
                    {
                        printf("%-10d %-25s %-10.2f\n", 
                               students[i].roll_number, 
                               students[i].name, 
                               students[i].marks);
                    }
                    printf("-------------------------------------------------\n");
                }
                break;
            case 3:
                if (total_students == 0)
                    printf("\nNo records available to search.\n");
                else 
                {
                    printf("\nEnter Roll Number to search: ");
                    scanf("%d", &search_roll);
                    found = 0;
                    for (i = 0; i < total_students; i++) 
                    {
                        if (students[i].roll_number == search_roll) 
                        {
                            printf("\nRecord Found:\n");
                            printf("Roll Number : %d\n", students[i].roll_number);
                            printf("Name        : %s\n", students[i].name);
                            printf("Marks       : %.2f\n", students[i].marks);
                            found = 1;
                            break;
                        }
                    }
                    if (!found)
                        printf("\nStudent with Roll Number %d not found.\n", search_roll);
                }
                break;
            case 4:
                printf("\nExiting system. Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    return 0;
}