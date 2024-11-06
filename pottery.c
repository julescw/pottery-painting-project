#include "pottery.h"


int user_input_int(char *message){
    int to_return; 
    printf("%s", message);
    scanf("%d", to_return);
    return to_return;
}

_Bool yes_no(char *message){
    _Bool to_return; 
    char input;
    printf("%s", message);
    scanf("%s", input);
    while(input != 'y' && input != 'Y' && input != 'n' && input != 'N'){
        printf("\nError. Please input Y or N.\n");
        scanf("%s", input);
    }
    if(input == 'y' || input == 'Y'){
        to_return = true;
    }
    else{
        to_return = false;
    }
    return to_return;
}

void add_order(order_t *order){

    // input employee id 
    // input date 
    // display generated order id 
    // input customer info 


    // initialize contact info 
    // initialize priority 
    int num_items = user_input_int("How many items did this customer have?");
    for(int i = 0; i < num_items; i++){
        // add_item();
    }
    printf("Here is the information you inputted:\n");
    _Bool edits = yes_no("Do you need to make any edits? Y/N\n");
    if(edits){

    }
    else{
        printf("Saving your order...\n");
    }
}
