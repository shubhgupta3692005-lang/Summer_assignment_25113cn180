#include <stdio.h>
int main() 
{
    int item_id[50], item_quantity[50];
    int count = 0, choice;
    while (1) 
    {
        printf("\n1. Add Item\n");
        printf("2. View Inventory\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) 
        {
            printf("Enter Item ID number: ");
            scanf("%d", &item_id[count]);
            printf("Enter Quantity: ");
            scanf("%d", &item_quantity[count]);
            count++;
            printf("Item added successfully!\n");
        } 
        else if (choice == 2) 
        {
            if (count == 0)
                printf("Inventory is empty!\n");
            else 
            {
                printf("\n--- Current Stock ---\n");
                for (int i = 0; i < count; i++)
                    printf("ID: %d | Quantity: %d\n", item_id[i], item_quantity[i]);
            }
        } 
        else if (choice == 3) 
        {
            printf("Exiting program.\n");
            break;
        } 
        else
            printf("Invalid choice! Try again.\n");
    }
    return 0;
}