#include <stdio.h>
#include <ctype.h>
int main() 
{
    char str[150];
    int vowels = 0, consonants = 0;
    printf("Enter a line of string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; ++i) 
    {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
                ++vowels;
            else
                ++consonants;
        }
    }
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);
    return 0;
}