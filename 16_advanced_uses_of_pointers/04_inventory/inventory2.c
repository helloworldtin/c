#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25

struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
    struct part *next;
};

struct part *inventory = NULL; /* pointers to the first part */

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

/*************************************************************
 * main: Prompts the user to enter an operation code,        *
 *       then call the function to perform the requested     *
 *       action. Repeat until the user enters the            *
 *       command  'q'. Prints an error message if the user   *
 *       enters an illegal code.                             *
 *************************************************************/
int main(void)
{
    char code;

    for(;;){
        printf("Enter the operation code: ");
        scanf(" %c", &code);

        while(getchar() != '\n') /* Skips to end of the line to empty input buffer */
            ;

        switch (code) {
            case 'i':   insert();
                        break;
            case 's':   search();
                        break;
            case 'u':   update();
                        break;
            case 'p':   print();
                        break;
            case 'q':   return 0;
            default:    printf("Illegal code\n");
        }

        printf("\n");
    }
}


/**************************************************************
 * find_part:   Looks up the part number in the inventory     *
 *              list. Returns the pointer to the node         *
 *              containing the part number; if the part       *
 *              number is not found returns NULL.             *
 **************************************************************/
struct part *find_part(int number){
    struct part *p;

    for(p = inventory;
        p != NULL && number > p->number;
        p = p -> next
        )
     ;

    if(p != NULL && number == p->number)
        return p;

    return NULL;
}

/******************************************************************
 * insert:  Prompts the user for information for the about new    *
 *          part and then inserts the part into the               *
 *          inventory list; the list remains sorted by            *
 *          part number. Prints and error message and             *
 *          returns prematurely if the part already exists        *
 *          or space could not be allocated for the part.         *
 ******************************************************************/
void insert(void)
{
    struct part *cur, *prev, *new_node;

    new_node = malloc(sizeof(struct part));
    if(new_node == NULL){
        printf("Database is full can't add more parts\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &new_node->number);

    for(cur = inventory, prev = NULL;
        cur != NULL && new_node->number > cur->number;
        prev = cur, cur = cur->next
        )
      ;

    if(cur != NULL && new_node->number == cur->number){
        printf("Part already exist.\n");
        free(new_node);
        return;
    }

    printf("Enter the part name: ");
    read_line(new_node->name, NAME_LEN);
    printf("Enter quality on hand: ");
    scanf("%d", &new_node->on_hand);

    new_node->next = cur;
    if(prev == NULL)
        inventory = new_node;
    else
        prev->next = new_node;
}

/**************************************************************
 * search:  Prompts the user to enter the part number, then   *
 *          looks up the part in the database. If the part    *
 *          exists, prints the name and quantity on hand;     *
 *          if not, prints an error message.                  *
 **************************************************************/
void search(void)
{
    int number;
    struct part *p;

    printf("Enter the part number: ");
    scanf("%d", &number);

    p = find_part(number);

    if(p != NULL){
        printf("Part name: %s\n", p->name);
        printf("Quantity on hand: %d\n", p->on_hand);
    }else{
        printf("Part not found.\n");
    }
}

/********************************************************************
 * update:  Prompts the user to enter the part number.              *
 *          Prints an error message if part doesn't                 *
 *          exist; otherwise, prompts the user to enter             *
 *          change in quality on hand. Part number will appear in   *
 *          ascending order.                                        *
 ********************************************************************/
void update(void)
{
    int number, change;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);

    if(p != NULL){
        printf("Enter change in quality on hand: ");
        scanf("%d", &change);
        p->on_hand += change;
    }else{
        printf("Part not found\n");
    }
}

/**********************************************************
 *  print:  Prints a listing of all parts of database,    *
 *          showing the part number, part name, and       *
 *          quality on hand. Part number will appear in   *
 *          ascending order.                              *
 **********************************************************/
void print(void)
{
    struct part *p;

    printf("Part Number     Part Name       Quality on Hand\n");
    for(p = inventory; p != NULL; p = p->next)
        printf("%7d     %-25s%11d\n",p->number, p->name, p->on_hand);
}
