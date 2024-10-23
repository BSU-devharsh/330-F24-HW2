#include "bit-manipulation.h"

int main() {
    unsigned int num = 0;  // Initialize number to 0
    int choice, bit_num;

    while (1) {
        displayMenu();
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  // Set bit
                bit_num = getBitPosition();

                
                break;

            case 2:  // Clear bit
                bit_num = getBitPosition();

                
                break;

            case 3:  // Print number

                break;

            case 4:  // Exit

                return 0;

            default:
                printf("Invalid choice. Please select 1-4.\n");
                break;
        }
    }

    return 0;
}
