#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 50
#define MAX_NAME_LEN 30
void displayMenu();
void addStudent(char names[][MAX_NAME_LEN], int scores[], int *count);
void displayAll(char names[][MAX_NAME_LEN], int scores[], int count);
void searchByName(char names[][MAX_NAME_LEN], int scores[], int count);
void calculatePerformance(int scores[], int count);
int main() 
{
    char studentNames[MAX_STUDENTS][MAX_NAME_LEN];
    int studentScores[MAX_STUDENTS];
    int currentCount = 0, choice;
    do {
        displayMenu();
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        getchar();
        switch(choice) {
            case 1:
                addStudent(studentNames, studentScores, &currentCount);
                break;
            case 2:
                displayAll(studentNames, studentScores, currentCount);
                break;
            case 3:
                searchByName(studentNames, studentScores, currentCount);
                break;
            case 4:
                calculatePerformance(studentScores, currentCount);
                break;
            case 5:
                printf("\nExiting system. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please select between 1 and 5.\n");
        }
    } while(choice != 5);
    return 0;
}
void displayMenu() 
{
    printf("\n   STUDENT MANAGEMENT SYSTEM    ");
    printf("\n=================================");
    printf("\n1. Add New Student Record");
    printf("\n2. Display All Student Records");
    printf("\n3. Search Student by Name");
    printf("\n4. View Class Performance Metrics");
    printf("\n5. Exit System");
    printf("\n=================================\n");
}
void addStudent(char names[][MAX_NAME_LEN], int scores[], int *count) 
{
    if (*count >= MAX_STUDENTS) {
        printf("\nError: System database is full!\n");
        return;
    }
    printf("\nEnter student's name: ");
    fgets(names[*count], MAX_NAME_LEN, stdin);
    names[*count][strcspn(names[*count], "\n")] = '\0';
    printf("Enter exam score (0-100): ");
    scanf("%d", &scores[*count]);
    getchar();
    (*count)++;
    printf("\nRecord added successfully!\n");
}
void displayAll(char names[][MAX_NAME_LEN], int scores[], int count) 
{
    if (count == 0) {
        printf("\nNo student records found to display.\n");
        return;
    }
    printf("\n---------------------------------");
    printf("\nID\t%-20s\tScore", "Student Name");
    for (int i = 0; i < count; i++)
        printf("\n%d\t%-20s\t%d", i + 1, names[i], scores[i]);
    printf("\n---------------------------------\n");
}
void searchByName(char names[][MAX_NAME_LEN], int scores[], int count) 
{
    if (count == 0) {
        printf("\nNo records available to search.\n");
        return;
    }
    char searchName[MAX_NAME_LEN];
    int found = 0;
    printf("\nEnter the student name to search: ");
    fgets(searchName, MAX_NAME_LEN, stdin);
    searchName[strcspn(searchName, "\n")] = '\0';
    for (int i = 0; i < count; i++) {
        if (strcasecmp(names[i], searchName) == 0) { 
            printf("\nRecord Found! ID: %d | Name: %s | Score: %d\n", i + 1, names[i], scores[i]);
            found = 1;
        }
    }
    if (!found)
        printf("\nStudent '%s' not found in database.\n", searchName);
}
void calculatePerformance(int scores[], int count) 
{
    if (count == 0) {
        printf("\nNo performance data available.\n");
        return;
    }
    int total = 0;
    int highest = scores[0];
    int lowest = scores[0];
    for (int i = 0; i < count; i++) {
        total += scores[i];
        if (scores[i] > highest) highest = scores[i];
        if (scores[i] < lowest) lowest = scores[i];
    }
    float average = (float)total / count;
    printf("\n=== CLASS PERFORMANCE ===");
    printf("\nTotal Students Evaluated : %d", count);
    printf("\nClass Average Score      : %.2f", average);
    printf("\nHighest Score Recorded   : %d", highest);
    printf("\nLowest Score Recorded    : %d", lowest);
    printf("\n=========================\n");
}