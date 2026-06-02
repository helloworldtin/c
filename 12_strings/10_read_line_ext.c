#include <ctype.h>
#include <stdio.h>

int read_line(char *str, int n);



int read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(isspace(ch)) continue;

        if(i < n - 1)
            str[i++] = ch;
    }

    if(ch == '\n') str[i++] = '\n';
    str[i] = '\0';

    return i;
}

/* website implementation */

int read_line_a(int str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
        if(i == 0 && isspace(ch))
            ;
        else if(i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}


int read_line_b(char str[], int n)
{
    int ch, i = 0;
    while(!isspace(ch = getchar()))
        if(i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int read_line_c(char str[], int n)
{
    int ch, i = 0;

    do{
       ch = getchar();
        if( i < n)
            str[i++] = ch;
    }while(ch != '\n');

    return i;
}

int read_line_d(char str[],  int n)
{
    int ch, i;
    for(i = 0; i < n; i++){
        ch = getchar();
        if(ch == '\n')
            break;
        str[i] = ch;
    }
    str[i] = '\0';
    return i;
}

int main(int argc, char* argv[])
{
    char str[100];

    printf("Enter the sentence: ");
    read_line_b(str, 100);
    printf("%s", str);
}
