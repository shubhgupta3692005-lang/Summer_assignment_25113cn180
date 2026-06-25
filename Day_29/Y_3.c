#include <stdio.h>
int main() 
{
    int choice, i, j;
    char s1[100], s2[100];
    do 
    {
        printf("\n1. Length\n2. Copy\n3. Concatenate\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) 
        {
            printf("Enter string: ");
            scanf("%s", s1);
            for (i = 0; s1[i] != '\0'; i++);
            printf("Length: %d\n", i);
        } 
        else if (choice == 2) 
        {
            printf("Enter string: ");
            scanf("%s", s1);
            for (i = 0; s1[i] != '\0'; i++)
                s2[i] = s1[i];
            s2[i] = '\0';
            printf("Copied string: %s\n", s2);
        } 
        else if (choice == 3) 
        {
            printf("Enter first string: ");
            scanf("%s", s1);
            printf("Enter second string: ");
            scanf("%s", s2);
            for (i = 0; s1[i] != '\0'; i++);
            for (j = 0; s2[j] != '\0'; j++, i++) 
                s1[i] = s2[j];
            s1[i] = '\0'; 
            printf("Combined: %s\n", s1);
        }
    } while (choice != 4);
    return 0;
}