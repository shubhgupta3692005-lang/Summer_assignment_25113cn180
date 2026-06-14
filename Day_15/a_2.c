#include <stdio.h>
int main() 
{
    int size, rotations, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    printf("Enter the number of positions to left rotate: ");
    scanf("%d", &rotations);
    rotations = rotations % size;
    for (i = 0; i < rotations; i++) 
    {
        temp = arr[0];
        for (j = 0; j < size - 1; j++) 
            arr[j] = arr[j + 1];
        arr[size - 1] = temp;
    }
    printf("Array after left rotation:\n");
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}