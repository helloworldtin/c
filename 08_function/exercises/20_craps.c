// Write a program that simulates the game of craps, which is played with two dice. On the
// first roll, the player wins if the sum of the dice is 7 or 11. The player loses if the sum is 2, 3.
// 218 Chapter 9 Functions
// or 12. Any other roll is called the "point" and the game continues. On each subsequent roll,
// the player wins if he or she rolls the point again. The player loses by rolling 7. Any other roll
// is ignored and the game continues. At the end of each game, the program will ask the user
// whether or not to play again. When the user enters a response other than y or Y, the program
// will display the number of wins and losses and then terminate.
// Yo u r o l l e d : 8
// Yo u r p o i n t i s 8
// Y o u r o l l e d : 3
// Y o u r o l l e d : 1 0
// You r o l l e d : 8
// Y o u w i n !
// Play again? y
// You r o l l e d : 6
// Your p o i n t i s 6
// Yo u r o l l e d : 5
// You r o l l e d : 12
// Yo u r o l l e d : 3
// You r o l l e d : 7
// Y o u l o s e !
// Play again? y
// You r o l l e d : 11
// Y o u w i n !
// Play again? n
// Wi n s : 2 L o s s e s : 1
// Write your program as three functions: main, roll_dice, and play_game. Here are
// the prototypes for the latter two functions:
// i n t r o l l d i c e (void) ;
// bool play_game (void) ;
// r o l l _ d i c e should generate two random numbers, each between 1 and 6, and return their
// sum. play_game should play one craps game (calling roll_dice to determine the out-
// come of each dice roll); it will return true if the player wins and false if the player loses.
// play_game is also responsible for displaying messages showing the results of the player's
// dice rolls. main will call play_game repeatedly, keeping track of the number of wins and
// losses and displaying the "you win" and "you lose" messages. Hint: Use the rand function
// to generate random numbers. See the deal. e program in Section 8.2 for an example of
// how t o call r a n d and the related s r a n d function.

#include <ctype.h>
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);


int main(void)
{
    int win_cont = 0;
    int lose_count = 0;

    for(;;){
        bool res = play_game();

        if(res)
            win_cont++;
        else
            lose_count++;

        printf("\n\n");

        printf("Play again: ");
        char ch;

        scanf("%c",&ch);
        getchar();

        if(tolower(ch) == 'y'){
            continue;

        }else if(tolower(ch) == 'n'){
            printf("Wins: %d\tLosses: %d\n",win_cont, lose_count);
            break;

        }else{
            printf("Please choose 'y' for yes and 'n' for no\n");
        }
    }
    return 0;
}


int roll_dice(void)
{

    int first_roll = (rand() % 6) + 1;
    int second_roll = (rand() % 6) + 1;

    return first_roll + second_roll;
}

bool play_game(void)
{
    srand((unsigned)time(NULL));
    int roll_sum = roll_dice();
    printf("You Rolled: %d\n", roll_sum);

    int returning_points[5] = {7 ,11, 2, 3, 12};
    bool is_point = true;

    for(int i = 0; i < 5; i++){
        if(returning_points[i] == roll_sum){
            is_point = false;
            break;
        }
    }

    if(is_point){
        printf("Your point is %d\n", roll_sum);

        int another_roll = roll_dice();
        printf("You rolled %d\n", another_roll);

        if(another_roll == roll_sum){
            printf("You Win!");
            return true;
        }
        else if(another_roll - 1 == roll_sum){
            printf("You Lose!");
            return false;
        }else {
           while(true){
               int new_roll = roll_dice();
               printf("You Rolled: %d\n", new_roll);

               bool should_eliminate = false;
               for(int i = 0; i < 5; i++){
                   if(returning_points[i] == new_roll){
                       roll_sum = new_roll;
                       should_eliminate = true;
                       break;
                   }
               }

               if(should_eliminate) break;
           }
        }

    }
    if(roll_sum == 7 || roll_sum == 1){
        printf("You Win!\n");
        return true;
    }

    printf("You Lose!\n");
    return false;
}
