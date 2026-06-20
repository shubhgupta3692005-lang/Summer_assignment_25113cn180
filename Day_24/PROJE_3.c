#include <stdio.h>
int main() 
{
    char str[500];
    int current_len = 0, current_start = 0;
    int i = 0, max_len = 0, max_start = 0;
    printf("Enter a sentence: ");
    while (i < 499) 
    {
        char ch = getchar();
        if (ch == '\n' || ch == EOF) 
        {
            str[i] = '\0';
            break;
        }
        str[i] = ch;
        i++;
    }
    i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && str[i] != '.' && str[i] != ',' && str[i] != '!' && str[i] != '?') 
        {
            if (current_len == 0) 
                current_start = i;
            current_len++; 
        } 
        else 
        {
            if (current_len > max_len) 
            {
                max_len = current_len;
                max_start = current_start;
            }
            current_len = 0;
        }
        i++;
    }
    if (current_len > max_len) 
    {
        max_len = current_len;
        max_start = current_start;
    }
    printf("The longest word is: ");
    for (int j = max_start; j < max_start + max_len; j++) 
        putchar(str[j]);
    printf("\nLength: %d\n", max_len);
    return 0;
}