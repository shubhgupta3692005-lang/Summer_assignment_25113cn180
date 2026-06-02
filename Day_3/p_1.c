#include <stdio.h>
int main()
{
    int n , i , x , flag = 0;
    printf("Enter a number to be checked");
    scanf("%d",&n);
    x = n /2;
    for(i=1;i<=x;i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag == 0)
    printf("%d is a prime number",n);
    else
    printf("Not a prime number");
    return 0;
}