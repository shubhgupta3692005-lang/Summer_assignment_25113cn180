#include <stdio.h>
int main() 
{
    int rows, cols, i, j,colSum;
    printf("Enter the number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (max 10): ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
    printf("\nColumn-wise sum:\n");
    for (j = 0; j < cols; j++) 
    {
        colSum = 0;
        for (i = 0; i < rows; i++) 
            colSum += matrix[i][j];
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }
    return 0;
}