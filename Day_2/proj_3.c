#include <stdio.h>
int main()
{
    int d, n , prod = 1;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        d = n % 10;
        prod = prod * d;
        n = n/10;
    }
    printf("The product of digits of a given number is %d ",prod);
    return 0; 
}