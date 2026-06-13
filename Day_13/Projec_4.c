#include <stdio.h>
int main() 
{
    int size, i, odd_count = 0, even_count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    for(i = 0; i < size; i++) 
    {
        if(arr[i] % 2 == 0) 
            even_count++;
        else 
            odd_count++;
    }
    printf("\nTotal even elements: %d\n", even_count);
    printf("Total odd elements: %d\n", odd_count);
    return 0;
}