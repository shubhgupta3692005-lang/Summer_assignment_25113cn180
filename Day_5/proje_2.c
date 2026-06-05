#include <stdio.h>
int main()
{
    int i , n , num , d, sum = 0, fact = 1;
    printf("Enter a number ");
    scanf("%d",&n);
    num = n;
    while(num>0)
    {
        d = num % 10;
        for(i=0;i<=d;i++)
            fact = fact * i;
        sum = sum + fact;
        num = num/10;
    }
    if(sum == n)
    printf("%d is a perfect number",n);
    else
    printf("Not a perfect number");
    return 0;
}