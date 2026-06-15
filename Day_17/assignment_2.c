#include <stdio.h>
int main() 
{
    int i, j, isDuplicate, n1, n2;
    int arr1[100], arr2[100], unionArr[200], unionSize = 0;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) 
        scanf("%d", &arr1[i]);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) 
        scanf("%d", &arr2[i]);
    for (i = 0; i < n1; i++) 
    {
        isDuplicate = 0;
        for (j = 0; j < unionSize; j++) 
        {
            if (arr1[i] == unionArr[j]) 
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) 
        {
            unionArr[unionSize] = arr1[i];
            unionSize++;
        }
    }
    for (i = 0; i < n2; i++) 
    {
        isDuplicate = 0;
        for (j = 0; j < unionSize; j++) 
        {
            if (arr2[i] == unionArr[j]) 
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) 
        {
            unionArr[unionSize] = arr2[i];
            unionSize++;
        }
    }
    printf("\nThe Union of the two arrays is:\n");
    for (i = 0; i < unionSize; i++) 
        printf("%d ", unionArr[i]);
    printf("\n");
    return 0;
}