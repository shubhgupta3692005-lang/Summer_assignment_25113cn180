#include <stdio.h>
int main() 
{
    int arr[100], n, i, j;
    int count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Duplicate elements are: ");
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                printf("%d ", arr[i]);
                count++;
                break;
            }
        }
    }
    if (count == 0) 
        printf("None");
    printf("\n");
    return 0;
}