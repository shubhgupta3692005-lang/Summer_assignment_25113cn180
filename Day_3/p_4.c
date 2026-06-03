#include <stdio.h>

int main() 
{
    int num1, num2, max;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;

    for (int i = max; ; i += max)
     {
        if (i % num1 == 0 && i % num2 == 0) 
        {
            printf("The LCM of %d and %d is: %d", num1, num2, i);
            break;
        }
    }
    return 0;
}