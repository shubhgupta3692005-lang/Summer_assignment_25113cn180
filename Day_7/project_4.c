#include <stdio.h>
int reverseNumber(int n, int rev) 
{
    if (n == 0) 
     return rev;
    rev = (rev * 10) + (n % 10);
    return reverseNumber(n / 10, rev);
}
int main() 
{
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) 
    {
        printf("Invalid input.\n");
        return 1;
    }
    int isNegative = (num < 0);
    int searchNum = isNegative ? -num : num;
    int result = reverseNumber(searchNum, 0);
    if (isNegative) 
       result = -result;
    printf("Reversed number: %d\n", result);
    return 0;
}