#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN 20

void read_line(char str[], int n);

int compare(const void *p, const void *q){
    return strcmp(*(const char **)p, *(const char **)q);
}

int main(void)
{
    int i = 0;
    char *words[100];

    char *str;
    for(;;){
        if(i > 100){
            printf("Too much word sorry\n");
            for(int j = 0; j < i; j++){
                printf("%s ", words[j]);
            }
            putchar('\n');
            break;
        }

        printf("Enter word: ");
        str = malloc(WORD_LEN + 1);
        read_line(str, WORD_LEN);

        if(strlen(str) == 0){
           qsort(words, i, sizeof(char *), compare);

            for(int j = 0; j < i; j++){
                printf("%s ", words[j]);
            }
            putchar('\n');
            break;
        }
        words[i++] = str;
    }
    return 0;
}

void read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
        if(i < n)
            str[i++] = ch;

    str[i] = '\0';
}
