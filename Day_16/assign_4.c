#include <stdio.h>
int main() 
{
    int i, j, k, size;
    printf("Enter number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    for (i = 0; i < size; i++) 
    {
        for (j = i + 1; j < size; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                for (k = j; k < size - 1; k++) 
                    arr[k] = arr[k + 1];
                size--;
                j--;
            }
        }
    }
    printf("\nArray after removing duplicates:\n");
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}