#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct node {
    const char *word;
    struct node *next;
};

struct node *line = NULL;
int line_len = 0;
int num_words = 0;

void clear_line()
{
    line = NULL;
    line_len = 0;
    num_words = 0;
}


// Only prototype is completed.
void add_word(const char *word)
{
    struct node *new_word;
    new_word = malloc(sizeof(struct node));
    if(new_word == NULL){
        printf("malloc failed: Unable to initialize the memory\n");
        exit(EXIT_FAILURE);
    }

    new_word->word = word;
    new_word->next = NULL;

    if(line == NULL){
        line = new_word;
        line_len += strlen(line->word);
        return;
    }

    // go to end of the line
    struct node *temp = line;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_word;
    line_len += strlen(line->word);
    num_words++;
}
