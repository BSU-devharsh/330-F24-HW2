#include "bit-manipulation.h"

int main() {
    unsigned int num = 0;  // Initialize number to 0
    int choice, bit_num;

    while (1) {
        displayMenu();
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the bit number (0-31): ");
                scanf("%d", &bit_num);

                if (bit_num >= 0 && bit_num <= 31) {
                    num |= (1 << bit_num); // Set the bit
                    printf("Bit set successfully.\n");
                } else {
                    printf("Invalid bit number.\n");
                }
                break;

            case 2:
                printf("Enter the bit number (0-31): ");
                scanf("%d", &bit_num);

                if (bit_num >= 0 && bit_num <= 31) {
                    num &= ~(1 << bit_num); // Clear the bit
                    printf("Bit cleared successfully.\n");
                } else {
                    printf("Invalid bit number.\n");
                }
                break;

            case 3:
                printf("The integer in 2's complement representation: %d\n", num);
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
