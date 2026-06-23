#include <stdio.h>
struct Student 
{
    int roll;
    char name[30];
    float marks;
};
int main() 
{
    struct Student s[100];
    int n;
    printf("How many students do you want to enter? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        printf("\n--- Enter Details for Student %d ---\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Enter Name (Single word): ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n====================================\n");
    printf("         STUDENT RECORDS            \n");
    printf("====================================\n");
    for (int i = 0; i < n; i++) 
        printf("Roll No: %d | Name: %s | Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    return 0;
}