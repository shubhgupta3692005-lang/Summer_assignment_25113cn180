#include <stdio.h>
int main() 
{
    char str[1000];
    char compressed[2000];
    int i = 0, j = 0;
    printf("Enter a string to compress: ");
    scanf("%s", str);
    while (str[i] != '\0') 
    {
        int count = 1;
        while (str[i] == str[i + 1] && str[i + 1] != '\0') 
        {
            count++;
            i++;
        }
        compressed[j++] = str[i];
        if (count > 0) 
        {
            char digits[10];
            int d_idx = 0;
            while (count > 0) 
            {
                digits[d_idx++] = (count % 10) + '0';
                count /= 10;
            }
            for (int k = d_idx - 1; k >= 0; k--) 
                compressed[j++] = digits[k];
        }
        i++;
    }
    compressed[j] = '\0';
    printf("Compressed string: %s\n", compressed);
    return 0;
}