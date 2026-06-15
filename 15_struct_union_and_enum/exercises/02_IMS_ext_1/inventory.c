#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number; /*ID of the item */
    char name[NAME_LEN + 1];
    int on_hand; /* Number of unit available */
}inventory[MAX_PARTS];

int num_parts = 0; /* Number of part currently store */

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void sort_inventory(void);


/************************************************************
 * man: Prompt the user to enter an operation code,         *
 *      then calls a function to perform the requested      *
 *      action. Repeat until the user enters the command    *
 *      'q'. Print an error message if the user             *
 *      enters an illegal code.                             *
 ************************************************************/
int main(void)
{
    char code;

    for(;;){
        printf("Enter the operation code: ");
        scanf(" %c", &code);

        while(getchar() != '\n') /* skips to end of line */
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
            default:    printf("Illegal Code\n");
        }
        printf("\n");
    }
}

/************************************************************
 * find_parts:  Looks up the part number in the inventory   *
 *              array. Returns the array index if part      *
 *              number is found; otherwise, returns -1.     *
 ************************************************************/
int find_part(int number)
{
    int i;

    for(i = 0; i < num_parts; i++){
        if(inventory[i].number == number)
            return i;
    }

    return -1;
}


/************************************************************************
 * insert:  Prompts the user for the information about a new            *
 *          part and then insert the part into the                      *
 *          database. Prints Prints an error message and returns        *
 *          prematurely if the part already exist or database if full.  *
 *********************************************************************I**/
void insert(void)
{
    int part_number;

    if(num_parts == MAX_PARTS){
        printf("Database is full can't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if(find_part(part_number) >= 0){
        printf("Part already exist.\n");
        return;
    }

    inventory[num_parts].number = part_number;
    printf("Enter the part name: ");
    read_line(inventory[num_parts].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;
}

/**************************************************************
 * search:  Prompts user to enter part number, then           *
 *          looks up the part in the database. If the part    *
 *          exists, prints the name and quantity on hand;     *
 *          if not, prints an error message.                  *
 **************************************************************/
void search(void)
{
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);

    i = find_part(number);
    if(i >= 0){
        printf("\nPart name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    }else{
        printf("Part not found.\n");
    }
}

/************************************************************
 * update:  Prompts the user to enter the part number.      *
 *          Print an error message if part doesn't          *
 *          exist; otherwise, prompts the user to enter     *
 *          change in quantity on hand and updates the      *
 *          database.                                       *
 ************************************************************/
void update(void)
{
    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if(i >= 0){
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand = change;
    }else{
        printf("Part not found.\n");
    }
}

/************************************************************
 * print:   Prints the listing of all parts in database,    *
 *          showing the part number, part name, and         *
 *          quantity on hand. Parts are printed in the      *
 *          order in which they were entered into the       *
 *          database.                                       *
 ************************************************************/
void print(void)
{
    int i;
    sort_inventory();

    printf("Parts Number        Part Name               "
        "Quantity on Hand\n");

    for(i = 0; i < num_parts; i++){
        printf("%7d         %-25s%11d\n", inventory[i].number,
            inventory[i].name, inventory[i].on_hand);
    }
}

/*****************************************************************************
 * sort_inventory: This function will sort the inventory in ascending order  *
 *                 So, we can use that in print function.                    *
 *****************************************************************************/
void sort_inventory(void)
{
    int i, j;
    for(i = 0; i < num_parts; i++){
        for(int j = i + 1; j < num_parts; j++){
            if(inventory[j].number < inventory[i].number){
                struct part temp = inventory[j];
                inventory[j] = inventory[i];
                inventory[i] = temp;
            }
        }
    }
}
