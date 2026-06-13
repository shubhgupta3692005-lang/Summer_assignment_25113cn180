#include <stdio.h>
int main() 
{
    int arr[100], n, i;
    int largest, second_largest;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    largest = arr[0];
    second_largest = arr[0]; 
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            second_largest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second_largest || largest == second_largest) 
        {
            if (arr[i] != largest) 
                second_largest = arr[i];
        }
    }
    printf("Second largest: %d\n", second_largest);
    return 0;
}