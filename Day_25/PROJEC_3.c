#include <stdio.h>
int main() 
{
    int n, i, j, k;
    char names[10][50], temp[50];
    printf("Enter the number of names: ");
    scanf("%d", &n);
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) 
        scanf("%s", names[i]);
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            int flag = 0;
            for (k = 0; k < 50; k++) 
            {
                if (names[j][k] > names[j + 1][k]) 
                {
                    flag = 1;
                    break;
                } 
                else if (names[j][k] < names[j + 1][k]) 
                    break;
                if (names[j][k] == '\0') break; 
            }
            if (flag) 
            {
                for (k = 0; k < 50; k++) 
                {
                    temp[k] = names[j][k];
                    names[j][k] = names[j + 1][k];
                    names[j + 1][k] = temp[k];
                }
            }
        }
    }
    printf("\nSorted names in alphabetical order:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", names[i]);
    return 0;
}