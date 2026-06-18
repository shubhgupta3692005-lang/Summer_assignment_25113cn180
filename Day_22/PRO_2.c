#include <stdio.h>
int main() 
{
    char sentence[1000];
    int i = 0, words = 0, in_word = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence);
    while (sentence[i] != '\0') 
    {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') 
            in_word = 0; 
        else if (in_word == 0) 
        {
            in_word = 1;
            words++;
        }
        i++;
    }
    printf("Total number of words: %d\n", words);
    return 0;
}