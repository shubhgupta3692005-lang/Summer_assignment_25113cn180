#include <stdio.h>
int main() 
{
    double base, result = 1.0;
    int exponent, i;
    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);
    if (exponent > 0) 
    {
        for (i = 1; i <= exponent; i++) 
            result *= base; 
    }
    else if (exponent < 0)
    {
        for (i = 1; i <= -exponent; i++) 
            result *= base;
        result = 1.0 / result;
    }
    printf("%.2lf raised to the power of %d is: %.6lf\n", base, exponent, result);
    return 0;
}