#include <stdio.h>
int main() 
{
    int bookIds[50];
    char bookTitles[50][30];
    int bookCount = 0;
    int choice;
    while (1) 
    {
        printf("\n--- LIBRARY MENU ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) 
        {
            if (bookCount < 50) 
            {
                printf("Enter Book ID number: ");
                scanf("%d", &bookIds[bookCount]);
                printf("Enter Book Title (Single word/No spaces): ");
                scanf("%s", bookTitles[bookCount]);
                bookCount++;
                printf("Book successfully added!\n");
            } 
            else 
                printf("Library storage is full!\n");
        }
        else if (choice == 2) 
        {
            if (bookCount == 0) 
                printf("The library is currently empty.\n"); 
            else 
            {
                printf("\n--- CURRENT BOOKS ---\n");
                printf("ID\tTitle\n");
                for (int i = 0; i < bookCount; i++) 
                    printf("%d\t%s\n", bookIds[i], bookTitles[i]);
            }
        }
        else if (choice == 3) 
        {
            printf("Exiting program. Goodbye!\n");
            break;
        }
        else 
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }
    return 0;
}