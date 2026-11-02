
#include <stdio.h>

int main()
{
    int choice, tickets;
    float price, total, discount = 0, tax, bill;
    char student;

    printf("1. Economy - Rs. 500\n");
    printf("2. Business - Rs. 900\n");
    printf("3. VIP - Rs. 1500\n");
    printf("4. Couple Seat - Rs. 2200\n");

    printf("Enter seat class: ");
    scanf("%d", &choice);

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    printf("Are you a student? (Y/N): ");
    scanf(" %c", &student);

    switch(choice)
    {
        case 1:
            price = 500;
            break;

        case 2:
            price = 900;
            break;

        case 3:
            price = 1500;
            break;

        case 4:
            price = 2200;
            break;

        default:
            printf("Invalid seat class!");
            return 0;
    }

    total = price * tickets;

    if ((student == 'Y' || student == 'y') &&
        (choice == 1 || choice == 2))
    {
        discount = total * 0.20;
    }

    tax = (total - discount) * 0.05;
    bill = total - discount + tax;

    printf("\n----- BILL DETAILS -----\n");
    printf("Seat Class: ");

    switch(choice)
    {
        case 1: printf("Economy\n"); 
		break;
        case 2: printf("Business\n"); 
		break;
        case 3: printf("VIP\n"); 
		break;
        case 4: printf("Couple Seat\n"); 
		break;
    }

    printf("Tickets: %d\n", tickets);
    printf("Total: Rs. %.2f\n", total);
    printf("Discount: Rs. %.2f\n", discount);
    printf("Tax: Rs. %.2f\n", tax);
    printf("Final Bill: Rs. %.2f\n", bill);

    return 0;
}

