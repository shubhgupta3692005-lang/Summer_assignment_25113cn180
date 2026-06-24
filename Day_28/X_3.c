#include <stdio.h>
int main() 
{
    int total_seats = 50, booked_seats = 0;
    int choice, tickets_to_book, tickets_to_cancel;
    float ticket_price = 200.0;
    while (1) 
    {
        printf("\n===================================\n");
        printf("     MOVIE TICKET BOOKING SYSTEM   \n");
        printf("===================================\n");
        printf("1. View Available Seats\n");
        printf("2. Book Tickets\n");
        printf("3. Cancel Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("\n--- Seat Status ---\n");
                printf("Total Capacity   : %d\n", total_seats);
                printf("Seats Booked     : %d\n", booked_seats);
                printf("Seats Available  : %d\n", total_seats - booked_seats);
                break;
            case 2:
                printf("\nEnter the number of tickets you want to book: ");
                scanf("%d", &tickets_to_book);
                if (tickets_to_book <= 0)
                    printf("Error: Invalid number of tickets!\n");
                else if (tickets_to_book > (total_seats - booked_seats))
                    printf("Sorry! Only %d seats are available.\n", total_seats - booked_seats);
                else 
                {
                    booked_seats += tickets_to_book;
                    printf("\nBooking Successful!\n");
                    printf("Tickets Booked: %d\n", tickets_to_book);
                    printf("Total Amount to Pay: P %.2f\n", tickets_to_book * ticket_price);
                }
                break;
            case 3:
                printf("\nEnter the number of tickets you want to cancel: ");
                scanf("%d", &tickets_to_cancel);
                if (tickets_to_cancel <= 0) 
                    printf("Error: Invalid number of tickets!\n");
                else if (tickets_to_cancel > booked_seats)
                    printf("Error: You cannot cancel more tickets than booked (%d booked).\n", booked_seats);
                else 
                {
                    booked_seats -= tickets_to_cancel;
                    printf("\nCancellation Successful!\n");
                    printf("%d tickets have been cancelled.\n", tickets_to_cancel);
                    printf("Refund Amount: P %.2f\n", tickets_to_cancel * ticket_price);
                }
                break;
            case 4:
                // Exit
                printf("\nThank you for using our booking system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select a valid option from the menu.\n");
        }
    }
    return 0;
}