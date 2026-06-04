#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(void){
    printf("Enter the word: ");
    char str[100];

    scanf("%s", str);
    int result = compute_scrabble_value(str);

    printf("The word is %d\n", result);
    return 0;
}

int compute_scrabble_value(const char *word)
{
    unsigned int value = 0;
    char ch;

    while(*word){
       ch = tolower(*word);

       if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'l' || ch == 'n' || ch == 'o' || ch == 'r' || ch == 's' || ch =='t' || ch == 'u'){
           value += 1;
       }else if(ch == 'd' || ch == 'g'){
           value += 2;
       }else if(ch == 'b' || ch == 'c' || ch == 'm' || ch == 'p'){
           value += 3;
       }else if(ch == 'f' || ch == 'h' || ch == 'v' || ch == 'w' || ch == 'y'){
           value += 4;
       }else if(ch == 'k'){
           value += 5;
       }else if(ch == 'j' || ch == 'x'){
           value += 8;
       }else if(ch == 'q' || ch == 'z'){
           value += 10;
       }

       word++;
   }

   return value;
}
