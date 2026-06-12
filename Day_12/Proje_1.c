#include <stdio.h>
int isPalindromeNumber(int num) 
{
    if (num < 0) 
        return 0; 
    int originalNum = num;
    long reversedNum = 0;
    int remainder;
    while (num > 0) 
    {
        remainder = num % 10;
        reversedNum = (reversedNum * 10) + remainder;
        num = num / 10;
    }
    if (originalNum == reversedNum) 
        return 1;
    else 
        return 0;
}
int main() 
{
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) 
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (isPalindromeNumber(number)) 
        printf("%d is a palindrome number.\n", number);
    else 
        printf("%d is not a palindrome number.\n", number);
    return 0;
}