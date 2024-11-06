#include <stdio.h>
#include <string.h>
#include "structures.h"

int user_input_int(char *message);

_Bool yes_no();
// returns bool based on Y/N input 

// need function to check for similar characters in customer name 

void item_id();
// need function to check if item id is valid
// item id and name could be stored in csv file i think...

void add_order(order_t *order);
// initializes each structure 
// asks for info for each member/calculates as needed
// let them edit at the end if made mistakes

void add_item(item_t *item);
// initializes each structure 
// asks for info for each member/calculates as needed
// let them edit at the end if made mistakes

void search_order(void);
// ask what they want to search by (customer name, item name, item ID)
// search orders for criteria 
// generate list of matching orders
// allow to select order
// if order not found allow to search again (maybe return int as code? use recursion?)

void display_order(int display, int chrono);
// for total number of orders 
// print order 
// if no orders display error message

void edit_order(void);
// ask what aspect they want to edit 
// change that part of the order
// in main i should be able to edit as many aspects as i want

void save_orders_to_file(const char *filename);

void load_orders_from_file(const char *filename);

