#include <stdio.h>
int main() 
{
    int n, largest_prime = -1;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n <= 1) 
    {
        printf("Please enter an integer greater than 1.\n");
        return 1;
    }
    int temp = n;
    if (temp % 2 == 0)
    {
        largest_prime = 2;
        while (temp % 2 == 0) 
            temp /= 2;
    }
    for (int i = 3; i * i <= temp; i += 2) 
    {
        if (temp % i == 0) 
        {
            largest_prime = i;
            while (temp % i == 0) 
                temp /= i; 
        }
    }
    if (temp > 2) 
        largest_prime = temp;
    printf("The largest prime factor of %d is: %d\n", n, largest_prime);
    return 0;
}