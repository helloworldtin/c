#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
int hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs; /* Can be 0,1 or 2 */

/* prototypes */
void read_cards(void);
void analyze_card(void);
void print_result(void);
bool is_duplicate_card(int rank, int suit);

/**********************************************************
 * main: Calls read_card, analyze_hand, and print_result  *
 *       repeatedly.                                      *
 **********************************************************/
int main(void)
{
    for(;;){
        read_cards();
        analyze_card();
        print_result();
    }

    return 0;
}

/********************************************************
 * read_cards: Reads the card into the external         *
 *             variables num_in_rank and num in suit;   *
 *             check for bad cards and duplicate cards. *
 ********************************************************/

void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int i,j, rank, suit;
    bool bad_card;
    int cards_read = 0;

    // clean up all the array

    for(i = 0; i < NUM_CARDS; i++){
        for(int j = 0; j < 2; j++){
            hand[i][j] = -1;
        }
    }

    while(cards_read < NUM_CARDS){
        bad_card = false;
        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':               exit(EXIT_SUCCESS);
            case '2':               rank = 0;  break;
            case '3':               rank = 1;  break;
            case '4':               rank = 2;  break;
            case '5':               rank = 3;  break;
            case '6':               rank = 4;  break;
            case '7':               rank = 5;  break;
            case '8':               rank = 6;  break;
            case '9':               rank = 7;  break;
            case 't': case 'T':     rank = 8;  break;
            case 'j': case 'J':     rank = 9;  break;
            case 'q': case 'Q':     rank = 10; break;
            case 'k': case 'K':     rank = 11; break;
            case 'a': case 'A':     rank = 12; break;
            default:                bad_card = true;
        }

        suit_ch = getchar();
        switch(suit_ch){
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:             bad_card = true;
        }

        while((ch = getchar()) != '\n'){
            if(ch != ' ') bad_card = true;
        }

        if(bad_card)
            printf("Bad card; ignored.\n");
        else if(is_duplicate_card(rank, suit))
            printf("Duplicate card; ignored.\n");
        else {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-king,         *
 *               and/ or three-of-a-kind; determines the  *
 *               number of pairs; stores the results into *
 *               the external variable straight, flush,   *
 *               four, three, and pairs                   *
 **********************************************************/
void analyze_card(void)
{
    int num_consec = 1;
    int i, suit_count = 1;
    straight = false;
    flush = false;
    four = false;
    pairs = 0;

    /* check for flush */

    int first_suit = hand[0][1];
    for(i = 1; i < 5; i++){
       if(first_suit == hand[i][1]) suit_count++;
    }
    if(suit_count == NUM_CARDS) flush = true;

    /* check for straight */
    int first_rank = hand[0][0];
    for(i = 1; i < 5; i++){
        if(hand[i][0] == first_rank + 1){
            first_rank++;
            num_consec++;
        }else{
            break;
        }
    }

    if(num_consec == NUM_CARDS){
        straight = true;
        return;
    }

    /* Check for 4-of-a-kind, 3-of-a-kind, and pairs */
    for(i = 0; i < 5; i++){
        int curr_rank = hand[i][0];
        int count = 0;
        for(int j = 0; j < 5; j++){
            if(curr_rank == hand[j][0]){
                count++;
            }
        }
        if(count == 4) {
            four = true;
            break;
        };
        if(count == 3) three = true;
        if(count == 2) pairs++;
    }
}

/*************************************************************
 * print_result: Prints the classification of the hand,      *
 *               based on the values of the external         *
 *               variables straight, flush, four, three      *
 *               and pairs.                                  *
 *************************************************************/
void print_result(void)
{
    if(straight && flush)   printf("Straight flush");
    else if (four)          printf("Four of a kind");
    else if (three
        && pairs == 1)      printf("Full House");
    else if (flush)         printf("Flush");
    else if (straight)      printf("Straight");
    else if (three)         printf("Three of a kind");
    else if (pairs == 2)    printf("Two pairs");
    else if (pairs == 1)    printf("Pair");
    else                    printf("High Card");

    printf("\n\n");
}
/*************************************************************
 * is_duplicate_card: Return the boolean value whether       *
 *                     given card is duplicated or not       *                                 *
 *************************************************************/

bool is_duplicate_card(int rank, int suit)
{
   int i;

    for(i = 0; i < 5; i++) {
        bool is_duplicate = false;
        int pre_rank = hand[i][0];
        int pre_suit = hand[i][1];

        if(rank == pre_rank && suit == pre_suit) return true;
    }

    return false;
}
