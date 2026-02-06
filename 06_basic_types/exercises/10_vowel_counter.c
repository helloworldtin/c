// Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
// Enter a sentence : And that's the way it is .
// Your sentence contains 6 vowels.

#include <ctype.h>
#include <stdio.h>
int main(void){
    printf("Enter the sentence: ");

    unsigned int vowel_count = 0;

    for(;;){
        char ch = getchar();
        if(ch == '\n') break;

        ch = tolower(ch);

        if(ch == 'a'|| ch == 'e'|| ch == 'i' || ch == 'o'||ch =='u'){
            vowel_count++;
        }
    }
    printf("The count of vowel is %u\n", vowel_count);

    return 0;
}
