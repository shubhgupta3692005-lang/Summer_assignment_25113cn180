#include <stdio.h>
int main() 
{
    char str[200], max_char = '\0';
    int freq[256] = {0}, i = 0, max_count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') 
    {
        if (str[i] != '\n') 
            freq[(unsigned char)str[i]]++;
        i++;
    }
    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > max_count) 
        {
            max_count = freq[i];
            max_char = (char)i;
        }
    }
    if (max_count > 0) 
        printf("The maximum occurring character is '%c' and it appears %d times.\n", max_char, max_count);
    else 
        printf("The string is empty.\n");
    return 0;
}