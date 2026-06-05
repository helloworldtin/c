#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_letter_exist(const char *word, char letter);
bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char word1[] = "hello";
    char word2[] = "elloh";

    if(are_anagrams(word1, word2))
        printf("The two words are anagrams\n");
    else
     printf("The two words are not anagrams\n");

    return 0;
}

bool is_letter_exist(const char *word, char letter)
{
    while (*word) {
        if(*word == letter)
            return true;
        word++;
    }

    return false;
}

bool are_anagrams(const char *word1, const char *word2)
{
    if(strlen(word1) != strlen(word2))
        return false;

    while(*word1){
        if(!is_letter_exist(word2, *word1))
            return false;
        word1++;
    }

    return true;
}
