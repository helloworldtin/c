/* Modify the square2. c program of Section 6.3 so that it pauses after every 24 squares and
displays the following message:
Press Ent ertocontinue . . .
After displaying the message, the program should use getchar to read a character.
getchar won't allow the program to continue until the user presses the Enter key. */

#include <stdio.h>

int main(void){
  int n;
  printf("Hello enter the number: ");
  scanf("%d",&n);

  // short ans = 1;
  long ans = 1;
  // this will remove '\n' from the input buffer.
  getchar();

  int count = 0;
  for(int i = 2; i <= n; i+=2){
        count++;
        if(count == 24){
            count = 0;
            printf("I am the best man in the world\n");
            while(1){
                printf("Please enter to continue: ");
                char ch = getchar();
                printf("The value of the characer is: %c\n",ch);
                if(ch == '\n') break;
            }
        }
        ans = i * i;
        printf("%ld\n",ans);
  }
  return 0;
}
