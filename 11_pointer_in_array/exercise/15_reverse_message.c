#include <stdio.h>

#define LEN 200

void read_message(char *message, int n);
void reverse_message(char *message, int n);
void print_message(char *message, int n);

int main(void)
{
    char message[LEN];
    read_message(message, LEN);
    reverse_message(message, LEN);
    print_message(message, LEN);

    return 0;
}
void read_message(char *message, int n)
{
    printf("Enter a message: ");

    int i;
    char *ptr = message;

    for(i = 0; i < n; i++){
        char ch = getchar();

        if(ch == '\n') {
            *ptr++ = '\0';
            break;
        };

        *ptr++ = ch;
    }
    ptr--;

}

void reverse_message(char* message, int n)
{
    char *low, *high;

    /* Go up to last char */
    for(high = message; high < message + n; high++){
        if(*high == '\0'){
            break;
        }
    }

    low = message;
    high = high - 1;

    while(low < high){
        char temp = *low;
        *low = *high;
        *high = temp;
        low++;
        high--;
    }
}

void print_message(char *message, int n)
{
    char *ptr;
    printf("Reversal is: ");
    for(ptr = message; ptr < message + n; ptr++){
        if(*ptr == '\0') break;
        printf("%c",*ptr);
    }

    putchar('\n');
}

void alternate_way_1(){
    char msg[LEN];
    int i;

    printf("Enter a message: ");

    for(i = 0; i < LEN; i++){
        msg[i] = getchar();
        if(msg[i] == '\n')
           break;
    }

    printf("Reversal is: ");

    for(i--; i >= 0; i--)
        putchar(msg[i]);
    putchar('\n');
}

void alternate_way_2(){
    char msg[LEN], *p;

    printf("Enter a message: ");
    for(p = &msg[0]; p < &msg[LEN]; p++){
        *p = getchar();
        if(*p == '\n') break;
    }

    printf("The reversal is: ");
    for(p--; p >= &msg[0]; p--)
        putchar(*p);
    putchar('\n');
}
