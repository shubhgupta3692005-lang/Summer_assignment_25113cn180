#include <stdio.h>
int isArmstrong(int num);
int power(int base, int exp);
int main() 
{
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) 
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (isArmstrong(number)) 
        printf("%d is an Armstrong number.\n", number);
    else 
        printf("%d is not an Armstrong number.\n", number);
    return 0;
}
int isArmstrong(int num) 
{
    int originalNum = num;
    int temp = num;
    int digits = 0, sum = 0;
    if (num < 0) 
       return 0;
    if (num == 0) 
       return 1;
    while (temp != 0) 
    {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) 
    {
        int remainder = temp % 10;
        sum += power(remainder, digits);
        temp /= 10;
    }
    return (sum == originalNum);
}
int power(int base, int exp) 
{
    int result = 1;
    for (int i = 0; i < exp; i++) 
        result *= base;
    return result;
}