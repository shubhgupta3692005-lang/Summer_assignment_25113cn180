#include <stdio.h>
int main() 
{
    int n, search, first, last, middle, flag = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers in sorted (ascending) order:\n", n);
    for (int c = 0; c < n; c++) 
        scanf("%d", &array[c]);
    printf("Enter value to find: ");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    while (first <= last) 
    {
        middle = first + (last - first) / 2;
        if (array[middle] < search) 
            first = middle + 1; 
        else if (array[middle] == search) 
        {
            printf("%d found at index %d (position %d).\n", search, middle, middle + 1);
            flag = 1;
            break;
        } 
        else 
            last = middle - 1;
    }
    if (flag == 0) 
        printf("Not found! %d isn't present in the list.\n", search);
    return 0;
}