#include <stdio.h>
int main()
{
    int n , i , fact = 1;
    if(n<0)
    printf("factorial of a negative number is not defined");
    else if(n == 0)
    printf("factorial of 0! is 1");
    else
    {
        printf("Enter a number");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
         fact = fact*i;
         printf("The factorial of %d! is %d",n,fact);
    }
    return 0;
}