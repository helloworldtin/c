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

struct part *inventory = NULL; /* Pointer to the first part */

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void dump(void);
void revert(void);

int main(void)
{
    char code;

    for(;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);

        while(getchar() != '\n')
            ;
        switch(code) {
            case 'i': insert();
                      break;
            case 's':
                      search();
                      break;
            case 'u':
                      update();
                      break;
            case 'p':
                      print();
                      break;
            case 'd':
                      dump();
                      break;
           case 'r':
                     revert();
                     break;
           case 'q':
                     return 0;
           default:
                     printf("Illegal Code \n");
        }

        printf("\n");
    }
}

struct part *find_part(int number) {
    struct part *p;

    for(p = inventory; p != NULL && number > p->number; p = p->next)
        ;
    if(p != NULL && number == p->number)
        return p;

    return NULL;
}

void insert(void) {
    struct part *curr, *prev, *new_node;
    new_node = malloc(sizeof(struct part));
    if(new_node == NULL) {
        fprintf(stderr, "Databhase is full can't add more part\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &new_node->number);

    for(curr = inventory, prev = NULL;
        curr != NULL && new_node->number > curr->number;
        prev = curr, curr = curr->next)
        ;
    if(curr != NULL && new_node->number == curr->number) {
        fprintf(stderr, "Part with number %d already exist\n", curr->number);
        free(new_node);
        return;
    }

    printf("Enter the part name: ");
    read_line(new_node->name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &new_node->on_hand);

    new_node->next = curr;

    if(prev == NULL)
        inventory = new_node;
    else
        prev->next = new_node;
}

void search(void)
{
    int number;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);

    p = find_part(number);

    if(p != NULL) {
        printf("Part name: %s\n", p->name);
        printf("Quantity on hand %d\n", p->on_hand);
        
    }else {
        printf("Part not found");
    }
}

void update(void)
{
 int number, change;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);

    p = find_part(number);

    if(p != NULL) {
        printf("Enter the change in quantity on_hand: ");
        scanf("%d", &change);
        p->on_hand += change;
     } else
        printf("Part not found\n");
}

void print(void) {
    struct part *p;

    printf("Part Number    Part Name    Quantity on hand\n");

    for(p = inventory; p != NULL; p = p->next) {
        printf("%7d        %-25s%-11d\n", p->number, p->name, p->on_hand);
    }
}

void dump(void) {
    struct part *p;
    char filename[100]; // only 99 chars allowed
    FILE *fp;
    int write_num;
    
    printf("Enter output filename: ");
    read_line(filename, 100);

    if((fp = fopen(filename, "wb")) == NULL) {
        fprintf(stderr, "Can't open file %s\n", filename);
        return;
    }
    
    for(p = inventory; p != NULL; p = p->next) {
        write_num = fwrite(&p->number, sizeof(int), 1, fp);
        
        if(write_num != 1) {
            fprintf(stderr, "something went wrong while writing n file %s\n", filename);
            return;
        }
        write_num = fwrite(p->name, sizeof(char) * ( NAME_LEN + 1), 1, fp);
        
        if(write_num != 1) {
            fprintf(stderr, "something went wrong while writing n file %s\n", filename);
            return;
        }
        write_num = fwrite(&p->on_hand, sizeof(int), 1, fp);
        
        if(write_num != 1) {
            fprintf(stderr, "something went wrong while writing n file %s\n", filename);
            return;
        }
    }
    fclose(fp);
    printf("Successfully written whole data\n");
}

void revert(void) {

    struct part *p, *existing_part;
    char name[NAME_LEN + 1], filename[100];
    int  read_no;
    FILE *fp;


    printf("Enter the file name: ");
    read_line(filename, 100);

    if((fp = fopen(filename, "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", filename);
        return;
    }
        
    for ( ;; ) {
        p = malloc(sizeof(struct part));
        if(p == NULL) {
            fprintf(stderr, "Out of memeory\n");
            break;
        }

        if(fread(&p->number, sizeof(int), 1, fp) != 1) {
            free(p);
            break;
        }
            
        fread(p->name, sizeof(char) * (NAME_LEN + 1), 1, fp);
        fread(&p->on_hand, sizeof(int), 1, fp);
        
        p->next = NULL;

        if(inventory == NULL) {
            inventory = p;
        }else {
            inventory->next = p;
        }
    }
    fclose(fp);
    print();
}
