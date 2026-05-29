#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SEN_LEN 100

void alternate_solution(void);

int main(void)
{
    int i, j;
    char sentence[SEN_LEN];
    printf("Enter a message: ");

    for(i = 0; i < SEN_LEN; i++){
        char ch = tolower(getchar());
        if(ch == '\n')
            break;

        if(ch >= 97 && ch <= 122) {
            sentence[i] = ch;
        }else{
            i--;
        }
    }

    i = i - 1;
    j = 0;

    while(j < i){
        if(sentence[i] != sentence[j]){
            printf("Not a palindrome.\n");
            exit(0);
        }
        j++;
        i--;
    }

    printf("Palindrome\n");

    return 0;
}


void alternate_solution(void){
    char *i, *j;
    char sentence[SEN_LEN];
    printf("Enter a message: ");

    for(i = &sentence[0]; i < &sentence[SEN_LEN]; i++){
        char ch = tolower(getchar());
        if(ch == '\n')
            break;

        if(ch >= 97 && ch <= 122) {
            *i = ch;
        }else
            i--;
        }

    i--;
    j =  &sentence[0];

    while(j < i){
        if(*i != *j){
            printf("Not a palindrome.\n");
            exit(0);
        }
        j++;
        i--;
    }

    printf("Palindrome\n");
}
