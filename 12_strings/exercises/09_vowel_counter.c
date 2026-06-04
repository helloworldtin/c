#include <ctype.h>
#include <stdio.h>

int compute_vowel(const char *sentence);
void read_line(char *str, int n);

int main(void){
    printf("Enter the sentence: ");

    char str[100];
    read_line(str, 100);

    size_t vowel_count = compute_vowel(str);

    printf("The count of vowel is %zu\n", vowel_count);
    return 0;
}

int compute_vowel(const char *sentence)
{

    int ch, vowel_count = 0;

    while(*sentence){
        ch = tolower(*sentence);

        if(ch == 'a'|| ch == 'e'|| ch == 'i' || ch == 'o'||ch =='u'){
            vowel_count++;
        }

        sentence++;
    }

    return vowel_count;
}


void read_line(char *str, int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }

    str[i] = '\0';
}
