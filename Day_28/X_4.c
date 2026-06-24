#include <stdio.h>
struct Contact 
{
    char name[50];
    char phone[20];
};
int main() 
{
    struct Contact contacts[50];
    int count = 0, choice;
    while (1) 
    {
        printf("\n--- Contact Menu ---\n");
        printf("1. Add Contact\n");
        printf("2. Display All\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) 
        {
            printf("Enter Name (no spaces): ");
            scanf("%s", contacts[count].name);
            printf("Enter Phone Number: ");
            scanf("%s", contacts[count].phone);
            count++; 
            printf("Contact saved!\n");
        } 
        else if (choice == 2) 
        {
            if (count == 0) 
                printf("No contacts found!\n");
            else 
            {
                printf("\n--- Contact List ---\n");
                for (int i = 0; i < count; i++) 
                    printf("%d. Name: %s | Phone: %s\n", i + 1, contacts[i].name, contacts[i].phone);
            }
        } 
        else if (choice == 3) 
        {
            printf("Exiting program...\n");
            break;
        } 
        else 
            printf("Invalid choice! Try again.\n");
    }
    return 0;
}