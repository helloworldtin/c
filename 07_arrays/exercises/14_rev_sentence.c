// Write a program that reverses the words in a sentence:
// E n t e r a sentence: you can c a g e a s w a l l o w c a n ' t you?
// R e v e r s a l of s e n t e n c e : you can't swallow a cage can you?
// Hint: Use a loop to read the characters one by one and store them in a one-dimensional
// char array. Have the loop stop at a period, question mark, or exclamation point (the "termi-
// nating character"), which is saved in a separate char variable. Then use a second loop to
// search backward through the array for the beginning of the last word. Print the last word,
// then search backward for the next-to-last word. Repeat until the beginning of the array is
// reached. Finally, print the terminating character.


#include <stdio.h>

int main(void){
    printf("Enter a sentence: ");

    char sentence[256];
    char ch = getchar();

    int i = 0;
    while(ch != '.' && ch != '!' &&  ch != '?'){
       sentence[i++] = ch;
       ch = getchar();
    }
    i--;

    while(i >= 0){
        int prev_i = i;
        while(sentence[i] != ' ' && i >= 0) i--;
        for(int j = i + 1; j <= prev_i; j++){
            putchar(sentence[j]);
        }
        if(i > 0)putchar(' ');
        i--;
    }
    putchar(ch);
    putchar('\n');
    return 0;
}
