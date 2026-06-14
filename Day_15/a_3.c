#include <stdio.h>
int main() 
{
    int size, i, j, k, last;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    printf("Enter the number of times to right rotate: ");
    scanf("%d", &k);
    k = k % size;
    for (i = 0; i < k; i++) 
    {
        last = arr[size - 1];
        for (j = size - 1; j > 0; j--) 
            arr[j] = arr[j - 1];
        arr[0] = last;
    }
    printf("Array after right rotation:\n");
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}