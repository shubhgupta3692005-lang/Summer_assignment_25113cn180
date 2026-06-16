#include <stdio.h>
int main() 
{
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) 
        printf("\nError: Matrix multiplication is not possible!\n");
    int first[r1][c1], second[r2][c2], result[r1][c2];
    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }
    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) 
                result[i][j] += first[i][k] * second[k][j];
        }
    }
    printf("\nResultant Matrix after Multiplication:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
            printf("%d\t", result[i][j]);
        printf("\n");
    }
    return 0;
}