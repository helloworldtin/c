#include <stdio.h>
#include <string.h>

#define N 200

int main(void)
{
    int ch, sentence_count = 0;
    char str[N + 1];

    fgets(str, N, stdin);
    str[strlen(str) - 1] = '\0';

    
    while((ch = getchar()) != EOF) {
        if(ch == '\n' || ch == '.' || ch == '!')
            sentence_count += 1;
    }
    printf("There are %d sentence in give file\n", sentence_count);
    return 0;
}
