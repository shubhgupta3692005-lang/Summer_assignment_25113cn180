#include <stdio.h>
int main() 
{
    char studentName[50];
    int rollNumber;
    float math, physics, chemistry, english, computerScience;
    float totalMarks, percentage;
    char grade;
    printf("        MARKSHEET GENERATION SYSTEM        \n");
    printf("===========================================\n");
    printf("Enter Student Name: ");
    scanf(" %[^\n]s", studentName); 
    printf("Enter Roll Number: ");
    scanf("%d", &rollNumber);
    printf("\nEnter marks obtained out of 100:\n");
    printf("Mathematics: ");
    scanf("%f", &math);
    printf("Physics: ");
    scanf("%f", &physics);
    printf("Chemistry: ");
    scanf("%f", &chemistry);
    printf("English: ");
    scanf("%f", &english);
    printf("Computer Science: ");
    scanf("%f", &computerScience);
    totalMarks = math + physics + chemistry + english + computerScience;
    percentage = (totalMarks / 500.0) * 100;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 50)
        grade = 'C';
    else if (percentage >= 35) 
        grade = 'D';
    else 
        grade = 'F';
    printf("\n\n");
    printf("====================================================\n");
    printf("                OFFICIAL MARKSHEET                  \n");
    printf("====================================================\n");
    printf(" Student Name : %-20s Roll No: %-10d\n", studentName, rollNumber);
    printf("----------------------------------------------------\n");
    printf(" Subject              | Max Marks | Marks Obtained  \n");
    printf("----------------------------------------------------\n");
    printf(" Mathematics          |    100    |     %5.2f       \n", math);
    printf(" Physics              |    100    |     %5.2f       \n", physics);
    printf(" Chemistry            |    100    |     %5.2f       \n", chemistry);
    printf(" English              |    100    |     %5.2f       \n", english);
    printf(" Computer Science     |    100    |     %5.2f       \n", computerScience);
    printf("----------------------------------------------------\n");
    printf(" Total Marks          |    500    |     %5.2f       \n", totalMarks);
    printf("----------------------------------------------------\n");
    printf(" Percentage: %5.2f%%                                \n", percentage);
    printf(" Final Grade: %c                                    \n", grade);
    printf(" Status     : %s                                    \n", (grade == 'F') ? "FAIL" : "PASS");
    return 0;
}