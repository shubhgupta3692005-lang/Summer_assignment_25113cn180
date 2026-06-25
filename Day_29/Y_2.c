#include <stdio.h>
int main() 
{
    int arr[100], n = 0, choice, i, item, pos;
    while (1) 
    {
        printf("\n1. Input Array\n2. Display Array\n3. Insert Element\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter size: ");
                scanf("%d", &n);
                printf("Enter %d elements: ", n);
                for (i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
                break;
            case 2:
                printf("Array: ");
                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;
            case 3:
                printf("Enter element and position (index): ");
                scanf("%d %d", &item, &pos);
                for (i = n - 1; i >= pos; i--)
                    arr[i + 1] = arr[i];
                arr[pos] = item;
                n++;
                break;
            case 4:
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
}