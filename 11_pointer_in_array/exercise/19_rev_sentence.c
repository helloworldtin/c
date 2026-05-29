#include <stdio.h>

int main(void){
    printf("Enter a sentence: ");

    char sentence[256];
    char ch = getchar();

    char* i = sentence;
    while(ch != '.' && ch != '!' &&  ch != '?'){
       *i++ = ch;
       ch = getchar();
    }
    i--;

    while(i >= sentence){
        char* prev_i = i;
        while(*i != ' ' && i >= sentence) i--;

        for(char* j = i + 1; j <= prev_i; j++){
            putchar(*j);
        }
        if(i > sentence) putchar(' ');
        i--;
    }
    putchar(ch);
    putchar('\n');
    return 0;
}
