#include <stdio.h>
int main() 
{
    int binary, temp;
    int decimal = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    temp = binary;
    while (temp > 0) 
    {
        rem = temp % 10;
        decimal += rem * base;
        base = base * 2;
        temp = temp / 10;
    }
    printf("Binary %d in decimal is: %d\n", binary, decimal);
    return 0;
}