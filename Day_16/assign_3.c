#include <stdio.h>
int main() 
{
    int n, targetSum, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n < 2) 
    {
        printf("An array must have at least 2 elements to form a pair.\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum to find: ");
    scanf("%d", &targetSum);
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == targetSum) 
            {
                printf("Pair found: %d and %d (at indices %d and %d)\n", arr[i], arr[j], i, j);
                found = 1;
            }
        }
    }
    if (!found) 
        printf("No pair found with the given sum %d.\n", targetSum);
    return 0;
}