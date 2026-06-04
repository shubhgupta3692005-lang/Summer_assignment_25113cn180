#include <stdio.h>
#include <math.h>
int main() 
{
    int lower, upper, i, temp1, temp2, remainder, n, result;
    lower = 100;
    upper = 2000;
    printf("Armstrong numbers between %d and %d are:\n", lower, upper);
    for (i = lower; i <= upper; ++i) 
    {
        temp1 = i;
        temp2 = i;
        n = 0;
        result = 0;
        while (temp1 != 0) 
        {
            temp1 /= 10;
            n++;
        }
        while (temp2 != 0) 
        {
            remainder = temp2 % 10;
            result += (int)(pow(remainder, n) + 0.5);      
            temp2 /= 10;
        }
        if (result == i) 
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}