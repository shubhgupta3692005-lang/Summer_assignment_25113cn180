#include <stdio.h>
int main() 
{
    int n;  
    printf("Enter the position (n): ");
    scanf("%d", &n);
    if (n <= 0) 
        printf("The 0th Fibonacci term is: 0\n");
     else if (n == 1) 
        printf("The 1st Fibonacci term is: 1\n");
     else
     {
        int t1 = 0, t2 = 1, nthTerm = 0;
        for (int i = 2; i <= n; i++) 
        {
            nthTerm = t1 + t2;
            t1 = t2;
            t2 = nthTerm;
        }
        printf("The %dth Fibonacci term is: %d\n", n, t2);
    }
    return 0;
}