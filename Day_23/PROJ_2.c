#include <stdio.h>
int main() 
{
    char str[100];
    int count[256] = {0}; 
    char first_repeating = '\0';
    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    for (int i = 0; str[i] != '\0'; i++) 
    {
        unsigned char ch = str[i];
        if (ch == ' ' || ch == '\t') 
            continue;
        if (count[ch] == 1) 
        {
            first_repeating = ch;
            break;
        }
        count[ch] = 1;
    }
    if (first_repeating != '\0') 
        printf("The first repeating character is: '%c'\n", first_repeating);
    else 
        printf("No repeating character found.\n");
    return 0;
}