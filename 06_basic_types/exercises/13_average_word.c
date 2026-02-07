/*Write a program that calculates the average word length for a sentence:
Enter a sentence : It w as deja vu all over again .
Average word length : 3. 4
For simplicity, your program should consider a punctuation mark to be part of the word to
which it is attached. Display the average word length to one decimal place. */

#include <stdio.h>

int main(void){
    printf("Enter a senence: ");

    unsigned int number_of_words = 0;
    unsigned int number_of_letter = 0;

    for(;;){
        char ch = getchar();
        if(ch == '\n'){
            number_of_words++;
            break;
        };

        if(ch == ' '){
            number_of_words++;
        }else{
            number_of_letter++;
        }

    }
    double average_length = (double)number_of_letter / (double)number_of_words;
    printf("Average word length is : %2lf\n", average_length);

    return 0;
}
