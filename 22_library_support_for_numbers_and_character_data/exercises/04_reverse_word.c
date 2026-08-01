#include <stdio.h>
#include <string.h>

int main(void)
{
    // asumming the sentence is 300 and word to be 100;
    char str[301], *words[100], *token;
    int i = 0, j;

    printf("Enter the sereis of words seperate by one sapce: ");
    fgets(str, 301, stdin);

    str[strlen(str) - 1] = '\0';

    token = strtok(str, " ");
    while(token != NULL) {
        words[i++] = token;
        token = strtok(NULL, " ");
    }

    for(j = i - 1; j >= 0; j--) {
        printf("%s ", words[j]);
    }

    printf("\n");
    
    return 0;
}
