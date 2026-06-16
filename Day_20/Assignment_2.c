#include <stdio.h>
int main() 
{
    int rows, cols, i, j, isSymmetric = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    if (rows != cols) 
        printf("The matrix must be square (rows = columns) to be symmetric.\n");
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    }
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) 
            break;
    }
    if (isSymmetric == 1) 
        printf("\nThe matrix is a Symmetric Matrix.\n");
    else 
        printf("\nThe matrix is NOT a Symmetric Matrix.\n");
    return 0;
}