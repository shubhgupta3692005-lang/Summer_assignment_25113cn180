#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    int freq[256] = {0}, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }
    printf("\nCharacter Frequencies:\n");
    for(i = 0; i < 256; i++) 
    {
        if(freq[i] != 0) 
            printf("'%c' : %d\n", i, freq[i]);
    }
    return 0;
}