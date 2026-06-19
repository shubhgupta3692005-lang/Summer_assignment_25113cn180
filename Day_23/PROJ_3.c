#include <stdio.h>
int main() 
{
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int len1 = 0, len2 = 0, i = 0, isAnagram = 1;
    printf("Enter the first string: ");
    while ((str1[len1] = getchar()) != '\n' && str1[len1] != EOF) 
        len1++;
    str1[len1] = '\0';
    printf("Enter the second string: ");
    while ((str2[len2] = getchar()) != '\n' && str2[len2] != EOF)
        len2++;
    str2[len2] = '\0';
    if (len1 != len2) 
    {
        printf("The strings are not anagrams.\n");
        return 0;
    }
    for (i = 0; i < len1; i++) 
    {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }
    for (i = 0; i < 256; i++) 
    {
        if (count1[i] != count2[i]) 
        {
            isAnagram = 0;
            break;
        }
    }
    if (isAnagram == 1) 
        printf("The strings are anagrams.\n");
    else 
        printf("The strings are not anagrams.\n");
    return 0;
}