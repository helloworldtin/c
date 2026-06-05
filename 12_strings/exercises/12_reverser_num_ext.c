#include <stdio.h>
#include <stdbool.h>

#define WORDS_COUNT 30
#define STR_LEN 20

bool read_word(char *str);

int main(void){
    int i = 0, j;
    char words[WORDS_COUNT][STR_LEN + 1];

    printf("Please enter the sentence ends with(., ?, !): ");

    for(;;){
        if(read_word(words[i++])){
            break;
        }
    }

    for(j = i - 1; j >= 0; j--){
        printf("%s ", words[j]);
    }

    putchar('\n');

    return 0;
}

bool read_word(char *str)
{
    char ch;

    while((ch = getchar()) != ' '){
        if(ch == '.' || ch == '?' || ch == '!' || ch == '\n'){
            *str = '\0';
            return true;
        }
        *str++ = ch;
    }
    *str = '\0';
    return false;
}
