// One of the oldest known encryption techniques is the Caesar cipher, attributed to Julius Cae-
// sar. It involves replacing each letter in a message with another letter that is a fixed number of
// positions later in the alphabet. (If the replacement would go past the letter Z, the cipher
// "wraps around" to the beginning of the alphabet. For example, if each letter is replaced by
// the letter two positions after it, then Y would be replaced by A, and Z would be replaced by
// B.) Write a program that encrypts a message using a Caesar cipher. The user will enter the
// message to be encrypted and the shift amount (the number of positions by which letters
// should be shifted):
// Enter message t o b e encrypted: Go a h e a d , make my day.
// E n t e r s h i f t amount ( 1 - 2 5 ) : 3
// Encrypted message: J r dkhdg, panh pb gdb.
// Notice that the program can decrypt a message if the user enters 26 minus the original key:
// Enter message to be encrypted: J r akhag, panh pb gab.
// E n t e r s h i f t a m o u n t ( 1 - 2 5 : 2 3
// E n c r y p t e d message: Go a h e a d , make my day.
// You may assume that the message does not exceed 80 characters. Characters other than let-
// ters should be left unchanged. Lower-case letters remain lower-case when encrypted, and
// upper-case letters remain upper-case. Hint: To handle the wrap-around problem, use the
// expression ( (ch - 'A') + n) % 26 + 'A' to calculate the encrypted version of an upper-
// case letter, where ch stores the letter and n stores the shift amount. (You'll need a similar
// expression for lower-case letters.)

#include <stdio.h>

#define N 80

int main(void){
    int n;
    char message[N];
    printf("Enter the message to be encrypted: ");

    for(int i = 0; i < N; i++){
        char ch = getchar();
        message[i] = ch;

        if(ch == '\n') break;
    }
    printf("Enter the shift amount(1-25): ");
    scanf("%d",&n);

    for(int i = 0; i < N; i++){
        if(message[i] == '\n') break;
        if(message[i] >= 'a' && message[i] <= 'z'){
            message[i] = ((message[i] - 'a') + n) % 26 + 'a';
        }else if (message[i] >= 'A' && message[i] <= 'Z'){
            message[i] = ((message[i] - 'A') + n) % 26 + 'A';
        }
    }

    // print the message
    printf("Encrypted message: ");

    for(int i = 0; i < N; i++){
        char ch = message[i];
        if(ch == '\n') break;
        putchar(ch);
    }

    putchar('\n');
}
