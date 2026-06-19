#include <stdio.h>
int main() 
{
    char str[100];
    int freq[256] = {0}, i, found = 0;
    printf("Enter a string: ");
    scanf("%99[^\n]", str); 
    for (i = 0; str[i] != '\0'; i++) 
        freq[(unsigned char)str[i]]++; 
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (freq[(unsigned char)str[i]] == 1) 
        {
            printf("The first non-repeating character is: '%c'\n", str[i]);
            found = 1;
            break;
        }
    }
    if (!found) 
        printf("All characters are repeating or the string is empty.\n");
    return 0;
}