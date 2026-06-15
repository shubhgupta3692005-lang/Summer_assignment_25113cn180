#include <stdio.h>
int main() 
{
    int n1, n2, i, j, k, isDuplicate, matchFound;
    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++) 
        scanf("%d", &arr1[i]);
    printf("Enter the number of elements for the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++) 
        scanf("%d", &arr2[i]);
    int minSize = (n1 < n2) ? n1 : n2;
    int intersect[minSize], intersectSize = 0;
    for(i = 0; i < n1; i++) 
    {
        isDuplicate = 0;
        for(k = 0; k < intersectSize; k++) 
        {
            if(arr1[i] == intersect[k]) 
            {
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate) 
            continue;
        matchFound = 0;
        for(j = 0; j < n2; j++) 
        {
            if(arr1[i] == arr2[j]) 
            {
                matchFound = 1;
                break;
            }
        }
        if(matchFound) 
        {
            intersect[intersectSize] = arr1[i];
            intersectSize++;
        }
    }
    printf("\nIntersection of the two arrays: ");
    if(intersectSize == 0) 
        printf("No common elements found.");
    else 
    {
        for(i = 0; i < intersectSize; i++) 
            printf("%d ", intersect[i]);
    }
    printf("\n");
    return 0;
}