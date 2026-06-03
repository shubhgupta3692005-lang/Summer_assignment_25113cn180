#include <stdio.h>

int main() {
    int num1, num2, gcd = 1;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int n1 = (num1 < 0) ? -num1 : num1;
    int n2 = (num2 < 0) ? -num2 : num2;
    int min = (n1 < n2) ? n1 : n2;
    for (int i = 1; i <= min; i++) 
    {
        if (n1 % i == 0 && n2 % i == 0) 
                 gcd = i; 
        
    }

    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
    return 0;
}