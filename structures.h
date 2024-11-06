#include <stdio.h>
#include <stdbool.h>

#define MAX_ITEMS_PER_ORDER 20

typedef struct{
    int day; 
    int month; 
    int year;
} date_t;

typedef struct{
    int id;
    char initials[4];
} employee_t;

typedef struct {
    int id;
    char name[200];
    char initials[10];
    char description[10000];
} item_t;

typedef struct{
    date_t date;
    int days_til_deadline;
    int position;
} priority_t;

typedef struct {
    int id; 
    char name[300];
    char email[300];
    char number[20];
    char notes[10000];
} customer_t;

typedef struct {
    _Bool call;
    date_t call_date;
    _Bool email; 
    date_t email_date;
} contact_t;

typedef struct {
    item_t *items[MAX_ITEMS_PER_ORDER];
    priority_t priority;
    customer_t customer;
    contact_t contact;
    employee_t cashier;
} order_t;