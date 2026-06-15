#include <stdio.h>
int main() 
{
    int n1, n2, i, j, k, arr1[100], arr2[100];
    int isDuplicate, hasCommon = 0;
    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) 
        scanf("%d", &arr1[i]);
    printf("\nEnter the number of elements for the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) 
        scanf("%d", &arr2[i]);
    printf("\nCommon elements are: ");
    for (i = 0; i < n1; i++) 
    {
        isDuplicate = 0;
        for (k = 0; k < i; k++) 
        {
            if (arr1[i] == arr1[k]) 
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) 
        {
            for (j = 0; j < n2; j++) 
            {
                if (arr1[i] == arr2[j]) 
                {
                    printf("%d ", arr1[i]);
                    hasCommon = 1;
                    break;
                }
            }
        }
    }
    if (!hasCommon) 
        printf("None");
    printf("\n");
    return 0;
}