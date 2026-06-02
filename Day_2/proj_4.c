#include <stdio.h>
int main()
{
    int n, t, d, rev = 0;
    printf("Enter a number");
    scanf("%d",n);
    t = n;
    while(n>0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n/10;
    }
    if(rev == t)
    printf("%d is a palidrome number",rev);
    else
    printf("Not a palindrome number");
    return 0;
}