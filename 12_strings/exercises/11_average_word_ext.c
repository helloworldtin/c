#include <stdio.h>

double compute_average_word_length(const char *sentence);
int read_line(char str[], int n);

int main(void){
    printf("Enter a senence: ");
    char str[100];
    read_line(str, 100);

    double ans = compute_average_word_length(str);

    printf("The average word is %.2lf\n", ans);
    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int total_letters = 0, word_count = 0;

    while(*sentence){
        if(*sentence == ' ')
            word_count++;
        else
            total_letters++;
        sentence++;
    }

    return (double)total_letters / (double)word_count;
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while((ch = getchar()) != '\n'){
        if(i < n)
            str[i++] = ch;
    }
    str[i] = '\0';

    return i;
}
