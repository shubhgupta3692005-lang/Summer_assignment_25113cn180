#include <stdio.h>
int main() 
{
    char str1[100], str2[100], common[100], ch;
    int commonCount = 0, i = 0, j = 0;
    printf("Enter the first string: ");
    while (i < 99 && (ch = getchar()) != '\n' && ch != EOF)
        str1[i++] = ch;
    str1[i] = '\0';
    printf("Enter the second string: ");
    while (j < 99 && (ch = getchar()) != '\n' && ch != EOF)
        str2[j++] = ch;
    str2[j] = '\0';
    for (i = 0; str1[i] != '\0'; i++) 
    {
        for (j = 0; str2[j] != '\0'; j++) 
        {
            if (str1[i] == str2[j]) 
            {
                int alreadyAdded = 0, k;
                for (k = 0; k < commonCount; k++) 
                {
                    if (common[k] == str1[i]) 
                    {
                        alreadyAdded = 1;
                        break;
                    }
                }
                if (!alreadyAdded) 
                    common[commonCount++] = str1[i];
                break;
            }
        }
    }
    common[commonCount] = '\0';
    if (commonCount > 0) 
    {
        printf("Common characters are: ");
        for (i = 0; i < commonCount; i++) 
            printf("%c ", common[i]);
        printf("\n");
    } 
    else 
        printf("No common characters found.\n");
    return 0;
}