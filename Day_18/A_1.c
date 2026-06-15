#include <stdio.h>
int main() 
{
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
        scanf("%d", &array[i]);
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) 
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}