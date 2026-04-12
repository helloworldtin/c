#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* prototypes  */

void initialize_number_generator(void);
int new_secret_number(void);
void read_guesses(int secret);


int main(void)
{
    char command;
    int secret_number;

    printf("Enter the secret number between 1 and %d\n\n",MAX_NUMBER);

    do {
        secret_number = new_secret_number();
        printf("New secret number has been chosen.\n");
        read_guesses(secret_number);
        printf("Play again (Y/N): ");
        scanf(" %c",&command);
        putchar('\n');
    }while(command != 'y' || command != 'Y');

    return 0;
}

/*********************************************************************
 * Initialize_number_generator: Initializes random number            *
 *                              random number generator              *
 *                              using time of the day.               *
 **********************************************************************/

void initialize_number_generator(void)
{
   srand((unsigned) time(NULL));
}

/**************************************************************
*    new_secret_number:  Return the randomly chosen number    *
*                        between 1 and MAX_NUMBER,            *
***************************************************************/

int new_secret_number(void)
{
    int random_number = rand() % 100 + 1;
    return random_number;
}

/******************************************************************************
 * choose_new_secret_number: Repeatedly guess read the user guesses and tells *
 *                           the user each guess is too low or too high       *
 *                           or correct. When the guess is correct, print     *
 *                           guess is correct, print the total number of      *
 *                           guesses.                                         *
 ******************************************************************************/

void read_guesses(int secrete_number)
{
    int guess, num_guesses = 0;
    for(;;){
       num_guesses++;
      printf("Enter guess: ");
      scanf("%d",&guess);

      if(guess == secrete_number){
          printf("You Won! in %d guesses\n\n",num_guesses);
          return;
      }else if(guess < secrete_number){
          printf("Too low, try again.\n");
      }else{
          printf("TO high, try again.\n");
      }
    }
}
