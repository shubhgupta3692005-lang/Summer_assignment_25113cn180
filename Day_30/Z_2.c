#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    int id;
    char title[100];
    char author[50];
    float price;
};
int main() 
{
    struct Book library[100];
    int bookCount = 0, choice, searchId, found, i;
    while (1) 
    {
        printf("\n=================================");
        printf("\n1. Add Book Information");
        printf("\n2. Display All Books");
        printf("\n3. Search Book by ID");
        printf("\n4. Display Total Book Count");
        printf("\n5. Exit");
        printf("\n=================================");
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                if (bookCount >= 100)
                    printf("\nLibrary capacity reached! Cannot add more books.\n");
                else {
                    printf("\nEnter Book ID: ");
                    scanf("%d", &library[bookCount].id);
                    while (getchar() != '\n'); 
                    printf("Enter Book Title: ");
                    fgets(library[bookCount].title, sizeof(library[bookCount].title), stdin);
                    library[bookCount].title[strcspn(library[bookCount].title, "\n")] = 0;
                    printf("Enter Author Name: ");
                    fgets(library[bookCount].author, sizeof(library[bookCount].author), stdin);
                    library[bookCount].author[strcspn(library[bookCount].author, "\n")] = 0;
                    printf("Enter Book Price: ");
                    scanf("%f", &library[bookCount].price);
                    printf("\nSuccess: Book added successfully!\n");
                    bookCount++;
                }
                break;
            case 2:
                if (bookCount == 0)
                    printf("\nThe library is currently empty.\n");
                else {
                    printf("\n%-10s %-30s %-25s %-10s\n", "Book ID", "Title", "Author", "Price");
                    for (i = 0; i < bookCount; i++)  {
                        printf("%-10d %-30s %-25s $%-9.2f\n", 
                               library[i].id, library[i].title, library[i].author, library[i].price);
                    }
                }
                break;
            case 3:
                if (bookCount == 0)
                    printf("\nThe library is empty. No books to search.\n");
                else 
                {
                    printf("\nEnter Book ID to search: ");
                    scanf("%d", &searchId);
                    found = 0; 
                    for (i = 0; i < bookCount; i++) {
                        if (library[i].id == searchId)  {
                            printf("\n--- Book Found ---");
                            printf("\nID: %d", library[i].id);
                            printf("\nTitle: %s", library[i].title);
                            printf("\nAuthor: %s", library[i].author);
                            printf("\nPrice: $%.2f\n", library[i].price);
                            found = 1;
                            break;
                        }
                    }
                    if (!found)
                        printf("\nError: Book with ID %d not found.\n", searchId);
                }
                break;
            case 4:
                printf("\nTotal number of books in library: %d\n", bookCount);
                break;
            case 5:
                printf("\nExiting system. Goodbye!\n");
                exit(0);
            default:
                printf("\nInvalid selection! Please choose an option between 1 and 5.\n");
        }
    }
    return 0;
}