#include <stdio.h>
#include <math.h>
int main()
{
    int n , temp1, temp2, d, s = 0 , count = 0;
    printf("Enter a number ");
    scanf("%d",&n);
    temp1 = n;
    while(temp1>0)
    {
        temp1 = temp1/10;
          count++;
    }
    temp2 = n;
    while(temp2>0)
    {
        d = temp2 % 10;
        s = s + (int) pow(d,count);
        temp2 = temp2 / 10;
    }
    if(s == n)
    printf("%d is an armstrong number",n);
    else
    printf("Not an armstrong number");
    return 0;
}