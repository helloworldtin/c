#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SEN_LEN 100

int main(void)
{
    char *i, *j;
    char sentence[SEN_LEN];
    printf("Enter a message: ");

    for(i = sentence; i < sentence + SEN_LEN; i++){
        char ch = tolower(getchar());
        if(ch == '\n')
            break;

        if(ch >= 97 && ch <= 122) {
            *i = ch;
        }else
            i--;
        }

    i--;
    j =  sentence;

    while(j < i){
        if(*i != *j){
            printf("Not a palindrome.\n");
            exit(0);
        }
        j++;
        i--;
    }

    printf("Palindrome\n");
    return  0;
}
