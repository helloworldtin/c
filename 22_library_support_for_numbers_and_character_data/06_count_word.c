#include <stdio.h>
#include <string.h>

int count_word(char *sentence)
{
    int count = 0;
    char *token = strtok(sentence, " ");

    while(token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}


int main(void)
{
    char sentence[] = "hello world I am doing nothing";
    int count = count_word(sentence);

    printf("The count is %d\n", count);

    return 0;
}
