//Write a program to demonstrate a Food Billing System. 


#include <stdio.h>

// Function to display the menu
void displayMenu() {
    printf("**********MENU**********\n");
    printf("\n");
    printf("1. Pizza - price - 180\n");
    printf("2. Burger - price - 100\n");
    printf("3. Pasta - price - 150\n");
    printf("4. Salad - price - 50\n");
    printf("5. EXIT\n");
    printf("\n");
    printf("--------SANKET DEVGANIYA --------\n");
}

int main()

 {
    int choice, quantity;          // Variables to store the user's choice and quantity of items
    char moreItems;                // Variable to store the user's response for more items
    float totalBill = 0.0;         // Variable to store the total bill amount

    // Do-while loop to continuously show the menu until the user exits
    do {
        displayMenu();             // Display the menu options

        printf("Please select a food item (1-5): ");
        scanf("%d", &choice);      // Input for the food item choice

        // Switch case to process the user's choice
        switch (choice) 
        
        {
            case 1:
                printf("You selected Pizza.\n");
                printf("Enter quantity: ");
                scanf("%d", &quantity);     // Input for the quantity of Pizza
                totalBill += 180 * quantity; // Add the price of Pizza to the total bill
                break;

            case 2:
                printf("You selected Burger.\n");
                printf("Enter quantity: ");
                scanf("%d", &quantity);     // Input for the quantity of Burger
                totalBill += 100 * quantity; // Add the price of Burger to the total bill
                break;

            case 3:
                printf("You selected Pasta.\n");
                printf("Enter quantity: ");
                scanf("%d", &quantity);     // Input for the quantity of Pasta
                totalBill += 150 * quantity; // Add the price of Pasta to the total bill
                break;

            case 4:
                printf("You selected Salad.\n");
                printf("Enter quantity: ");
                scanf("%d", &quantity);     // Input for the quantity of Salad
                totalBill += 50 * quantity;  // Add the price of Salad to the total bill
                break;

            case 5:
                printf("Exiting...\n");      // Exit the menu
                break;

            default:
                printf("Invalid choice! Please select a valid option from the menu.\n");
                continue;                    // Ask for input again in case of invalid choice
        }    

        // Ask if the user wants to select more items if they haven't chosen to exit
        if (choice != 5) 
        {
            printf("Do you want to select more items? (y/n): ");
            scanf(" %c", &moreItems);        // Input to check if the user wants more items
        } else 
        
        {
            moreItems = 'n';                 // Set moreItems to 'n' to exit the loop if the user selected 5 (Exit)
        }
    } while (moreItems == 'y' || moreItems == 'Y'); // Repeat the loop if the user wants more items

    printf("\nTotal Bill: %.2f\n", totalBill); // Print the total bill amount
    printf("\n");
    printf("**********Thank you very much for visiting**********\n");

    return 0; // End of program
}

