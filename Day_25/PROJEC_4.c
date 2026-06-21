#include <stdio.h>
int main() 
{
    char text[500], words[50][50], temp[50]; 
    int i = 0, j = 0, k = 0, n = 0;
    printf("Enter a sentence: ");
    while (1) 
    {
        char ch = getchar();
        if (ch == '\n') break;
        text[i++] = ch;
    }
    text[i] = '\0';
    i = 0;
    while (text[i] != '\0') 
    {
        if (text[i] != ' ') 
            words[n][j++] = text[i];
        else 
        {
            words[n][j] = '\0';
            n++;
            j = 0;
        }
        i++;
    }
    words[n][j] = '\0';
    n++; 
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            int len1 = 0, len2 = 0;
            while (words[j][len1] != '\0') len1++;
            while (words[j + 1][len2] != '\0') len2++;
            if (len1 > len2) 
            {
                k = 0;
                while (words[j][k] != '\0') 
                { 
                    temp[k] = words[j][k]; 
                    k++; 
                }
                temp[k] = '\0';
                k = 0;
                while (words[j + 1][k] != '\0') 
                { 
                    words[j][k] = words[j + 1][k]; 
                    k++; 
                }
                words[j][k] = '\0';
                k = 0;
                while (temp[k] != '\0') 
                { 
                    words[j + 1][k] = temp[k]; 
                    k++; 
                }
                words[j + 1][k] = '\0';
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for (i = 0; i < n; i++) 
        printf("%s ", words[i]);
    printf("\n");
    return 0;
}