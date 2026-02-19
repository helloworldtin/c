 // The prototypical Internet newbie is a fellow named BIFE, who has a unique way of writing
 // messages. Here's a typical BIFF communiqué:
 // H3Y DUD, C 15 RILLY COOLI11!!!1!!
 // Write a "BIFF filter" that reads a message entered by the user and translates it into BIFF-
 // speak:
 // Enter message: Hey dude, C is really cool
 // In BIFF-speak: H3Y DUD3, C 15 RILLY COOLIT!!!!1!!!
 // Your program should convert the message to upper-case letters, substitute digits for certain
 // letters (A → 4, B → 8, E → 3, 1 → 1, O → 0, S-5), and then append 10 or so exclamation marks.
 // Hint: Store the original message in an array of characters, then go back through the array,
 // translating and printing characters one by one.


 #include <stdio.h>
 #include <ctype.h>

 #define N 200

 int main(void){
     char message[N];
     printf("Enter message: ");

     // saved each letter at message array
     for(int i = 0; i < N; i++){

         char ch = getchar();
         message[i] = ch;
         if(ch == '\n') break;
     }

     printf("In B1FF Speak: ");

     for(int i = 0; i < N; i++){
         if(message[i] == '\n') break;

         char ch = toupper(message[i]);
         if(ch == 'A')
            ch = '4';
         else if(ch == 'B')
             ch = '8';
         else if(ch == 'E')
             ch = '3';
         else if(ch == 'I')
             ch = '1';
         else if (ch == 'O')
             ch = '0';
         else if (ch == 's')
             ch = '5';
        putchar(ch);
     }
     printf("! ! ! ! ! ! ! ! ! !");
     printf("\n");

     return 0;
 }
