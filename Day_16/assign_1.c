#include <stdio.h>
int main() 
{
    int n, i, array_sum = 0, expected_sum = 0, missing_number;
    printf("Enter the value of N (total elements including the missing one): ");
    if (scanf("%d", &n) != 1 || n <= 1) 
    {
        printf("Invalid input for N.\n");
        return 1;
    }
    int arr[n - 1]; 
    printf("Enter %d elements (from 1 to %d, with one missing):\n", n - 1, n);
    for (i = 0; i < n - 1; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) 
        array_sum += arr[i];
    expected_sum = (n * (n + 1)) / 2;
    missing_number = expected_sum - array_sum;
    printf("\nThe missing number is: %d\n", missing_number);
    return 0;
}