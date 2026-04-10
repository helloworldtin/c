#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* External variable*/
int secrete_number;

/* Prototypes */
void initialize_number_generator();
void choose_new_secrete_number();
void read_guesses();

int main(void)
{
    char command;

    printf("Guess the secret number between between 1 and %d.\n\n", MAX_NUMBER);

    initialize_number_generator();

    do {
        choose_new_secrete_number();
        printf("A new number has been chooses.\n");
        read_guesses();
        printf("Play again (Y/N) ");
        scanf(" %c",&command);
        printf("\n");
    }while(command == 'y' || command == 'Y');


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

/********************************************************************
 * choose_new_secret_number: Randomly select the number             *
 *                           between 1 and MAX_NUMBER and           *
 *                           stores in the new secret number        *
 ********************************************************************/

void choose_new_secrete_number(void)
{
    secrete_number = rand() % MAX_NUMBER + 1;
}
/******************************************************************************
 * choose_new_secret_number: Repeatedly guess read the user guesses and tells *
 *                           the user each guess is too low or too high       *
 *                           or correct. When the guess is correct, print     *
 *                           guess is correct, print the total number of      *
 *                           guesses.                                         *
 ******************************************************************************/

void read_guesses(void)
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
