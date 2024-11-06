// Jules Wong

#include "pottery.h"

int main(){
    // memory stuff goes here probably 
    // and creating an array of pointers to orders...
    // and calculating the total number of active orders

    printf("<<< Welcome to Pottery Painting's Order Tracking Software >>>\n");
    printf("             Copyright Jules Wong 2024\n\n");

    while(1){
        printf("Main Menu:\n");
        printf("1. Add new order\n2. Edit an order\n3. Search for an order\n4. Display all orders\n5. Exit\n");
        int choice = user_input_int("\nInput your choice: ");
        while(0 > choice || choice > 4){
            printf("\nError. Option is not specified. Please make another choice.");
            choice = user_input_int("\nInput your choice: ");
        }
        switch(choice){
            case 1: {
                printf("\nAdding new order...\n");
                // call add_order
            }
            case 2: {
                printf("\nEditing order...\nDisplaying active orders...\n");
                int chrono_choice = user_input_int("Do you wish to display the orders in...\n1. Oldest to Newest\n2. Newest to Oldest");
                while(1 != chrono_choice || chrono_choice != 2){
                        printf("\nError. Option is not specified. Please make another choice.");
                        chrono_choice = user_input_int("\nInput your choice: ");
                    }
                display_order(2, chrono_choice);
                int edit_id = user_input_int("\nEnter the ID of the order you wish to edit: ");
                // order search and return 

            }
            case 3: {
                printf("\nSearching for order...\n");
                int search_choice = user_input_int("What attribute do you wish to search by?\n1. Customer Name\n2. Date of Purchase\n3. Item in Order\n");
                while(0 >= search_choice || search_choice > 3){
                        printf("\nError. Option is not specified. Valid options are: \n1. Customer Name\n2. Date of Purchase\n3. Item in Order\nPlease make another choice.");
                        search_choice = user_input_int("\nInput your choice: ");
                    }
            }
            case 4: {
                int display_choice = user_input_int("\nDo you wish to display...\n1. ALL TIME orders\n2. ACTIVE orders");
                while(1 != display_choice || display_choice != 2){
                    printf("\nError. Option is not specified. Please make another choice.");
                    display_choice = user_input_int("\nInput your choice: ");
                }
                if(display_choice == 1){
                    int chrono_choice = user_input_int("\nDo you wish to display the orders in...\n1. Oldest to Newest\n2. Newest to Oldest");
                    while(1 != chrono_choice || chrono_choice != 2){
                        printf("\nError. Option is not specified. Please make another choice.");
                        chrono_choice = user_input_int("\nInput your choice: ");
                    }
                    display_order(display_choice, chrono_choice);
                }
                else if(display_choice == 2){
                    int chrono_choice = user_input_int("\nDo you wish to display the orders in...\n1. Oldest to Newest\n2. Newest to Oldest");
                    while(1 != chrono_choice || chrono_choice != 2){
                        printf("Error. Option is not specified. Please make another choice.");
                        chrono_choice = user_input_int("\nInput your choice: ");
                    }
                    display_order(display_choice, chrono_choice);
                }
            }
            case 5: {
                printf("Exiting the program. Thank you and goodnight!");
                return 0;
            }
        }
    }
}