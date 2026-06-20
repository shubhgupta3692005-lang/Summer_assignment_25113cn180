#include <stdio.h>
int main() 
{
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    int i, j, is_rotation = 0;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    while (str1[len1] != '\0') 
        len1++;
    while (str2[len2] != '\0') 
        len2++;
    if (len1 != len2) 
    {
        printf("The strings are NOT rotations of each other.\n");
        return 0;
    }
    for (i = 0; i < len1; i++) 
    {
        int match = 1;
        for (j = 0; j < len1; j++) 
        {
            if (str1[(j + i) % len1] != str2[j]) 
            {
                match = 0;
                break;
            }
        }
        if (match == 1) 
        {
            is_rotation = 1;
            break;
        }
    }
    if (is_rotation) 
        printf("The strings ARE rotations of each other.\n");
    else 
        printf("The strings are NOT rotations of each other.\n");
    return 0;
}