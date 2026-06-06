#include <stdio.h>
int main() 
{
    int num, original_num;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original_num = num;
    unsigned int n = (unsigned int)num;
    while (n > 0) 
    {
        n = n & (n - 1);
        count++;
    }
    printf("The number of set bits in %d is: %d\n", original_num, count);
    return 0;
}
