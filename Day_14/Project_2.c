#include <stdio.h>
int main() 
{
    int arr[100];
    int size, target, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
            count++;
    }
    printf("The element %d occurs %d times in the array.\n", target, count);
    return 0;
}