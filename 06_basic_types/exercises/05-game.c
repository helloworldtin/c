// In the SCRABBLE Crossword Game, players form words using small tiles, each containing
// a letter and a face value. The face value varies from one letter to another, based on the let-
// ter's rarity. (Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K.
// 8: JX, 10: QZ.) Write a program that computes the value of a word by summing the values
// of its letters:
// Enter a word: pitfall
// Scrabble value : 12
// Your program should allow any mixture of lower-case and upper-case letters in the word.
// Hint: Use the toupper library function.

#include <stdio.h>
#include <ctype.h>

int main(void){
    printf("Enter the word: ");

    unsigned int sum = 0;

    for(;;){
       char ch = getchar();
       if(ch == '\n') break;
       ch = tolower(ch);

       if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'l' || ch == 'n' || ch == 'o' || ch == 'r' || ch == 's' || ch =='t' || ch == 'u'){
           sum += 1;
       }else if(ch == 'd' || ch == 'g'){
           sum += 2;
       }else if(ch == 'b' || ch == 'c' || ch == 'm' || ch == 'p'){
           sum += 3;
       }else if(ch == 'f' || ch == 'h' || ch == 'v' || ch == 'w' || ch == 'y'){
           sum += 4;
       }else if(ch == 'k'){
           sum += 5;
       }else if(ch == 'j' || ch == 'x'){
           sum += 8;
       }else if(ch == 'q' || ch == 'z'){
           sum += 10;
       }
    }
    printf("The word is %d\n",sum);
    return 0;
}
