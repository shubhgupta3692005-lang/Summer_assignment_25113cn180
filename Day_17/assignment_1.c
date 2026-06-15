#include <stdio.h>
int main() 
{
    int i, size1, size2, sizeMerged;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements:\n", size1);
    for (i = 0; i < size1; i++)
        scanf("%d", &arr1[i]);
    printf("\nEnter the number of elements in the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements:\n", size2);
    for (i = 0; i < size2; i++) 
        scanf("%d", &arr2[i]);
    sizeMerged = size1 + size2;
    int merged[sizeMerged];
    for (i = 0; i < size1; i++)
        merged[i] = arr1[i];
    for (i = 0; i < size2; i++) 
        merged[size1 + i] = arr2[i];
    printf("\nThe merged array elements are:\n");
    for (i = 0; i < sizeMerged; i++) 
        printf("%d ", merged[i]);
    printf("\n");
    return 0;
}