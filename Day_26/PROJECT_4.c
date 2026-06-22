#include <stdio.h>
int main() 
{
    int score = 0, choice;
    printf("--- Welcome to the C Quiz App ---\n\n");
    printf("Q1. What is the size of an int in C?\n");
    printf("1. 1 byte\n2. 2 bytes\n3. 4 bytes\n4. 8 bytes\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 3) 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
        printf("Wrong! The correct answer was 3.\n\n");
    printf("Q2. Which symbol is used to terminate a statement in C?\n");
    printf("1. .\n2. ;\n3. :\n4. }\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
        printf("Wrong! The correct answer was 2.\n\n");
    printf("Q3. Which of these is a keyword in C?\n");
    printf("1. function\n2. output\n3. int\n4. input\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 3) 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
        printf("Wrong! The correct answer was 3.\n\n");
    printf("Your final score is: %d / 3\n", score);
    return 0;
}