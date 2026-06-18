#include <stdio.h>
int main()
{
    char str[50];
    int i, j, l = 0, flag = 1;
    printf("Enter a string: ");
    gets(str);
    for(i = 0;str[i] != '\0';i++)
        l++;
    for(i = 0, j = l-1; i<j; i++,j--)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    printf("The entered string is palindrome.");
    else
    printf("The entered string is not palindrome.");
    return 0;
}