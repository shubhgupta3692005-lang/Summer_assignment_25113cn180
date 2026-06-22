#include <stdio.h>
int main() 
{
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("Congratulations! You are eligible to vote.\n");
    else if (age < 0) 
        printf("Invalid age entered. Please enter a positive number.\n");
    else 
        printf("Sorry, you are not eligible to vote yet.\n");
    return 0;
}