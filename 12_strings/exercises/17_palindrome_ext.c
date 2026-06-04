#include <stdio.h>
#include <stdbool.h>


bool is_palindrome(const char *word);

int main(void)
{
    char hello[] = "bob";
    printf("This is %d\n", is_palindrome(hello));

    return 0;
}

bool is_palindrome(const char *word)
{
    const char *initial_position = word;
    while(*word)
        word++;

    word = word - 1;
    while(initial_position != word){
        if(*initial_position != *word)
            return false;
        initial_position++;
        word--;
    }

    return true;
}
