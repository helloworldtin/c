#include <stdio.h>

#define  MAX_DIGIT 10

const int segments[10][7] = {
    /* 0 */ {1,1,1,1,1,1,0},
    /* 1 */ {0,1,1,0,0,0,0},
    /* 2 */ {1,1,0,1,1,0,1},
    /* 3 */ {1,1,1,1,0,0,1},
    /* 4 */ {0,1,1,0,0,1,1},
    /* 5 */ {1,0,1,1,0,1,1},
    /* 6 */ {1,0,1,1,1,1,1},
    /* 7 */ {1,1,1,0,0,0,0},
    /* 8 */ {1,1,1,1,1,1,1},
    /* 9 */ {1,1,1,1,0,1,1}
};

char digits[4][MAX_DIGIT * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char ch;
    int position = 0;

    clear_digits_array();
    printf("Enter the number: ");

    while((ch = getchar()) != '\n'){
        if(position >= MAX_DIGIT)
            break;

        if(ch >= '0' && ch <= '9'){
            process_digit(ch - '0', position);
            position++;
        }
    }
    print_digits_array();

    return 0;
}

void clear_digits_array(void)
{
    for(int row = 0; row < 4; row++){
        for (int col = 0; col < MAX_DIGIT * 4; col ++){
            digits[row][col] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{
    int pos = position * 4;

    /* Top horizontal segment */
    if(segments[digit][0])
        digits[0][pos + 1] = '_';

    /* Upper-right vertical1 */
    if(segments[digit][1])
        digits[1][pos + 2] = '|';

    /* Lower right vertical */
    if(segments[digit][2])
        digits[2][pos + 2] = '|';

    /* Bottom Horizontal */
    if(segments[digit][3])
        digits[2][pos + 1] = '_';

    /* Lower left vertical */
    if(segments[digit][4])
        digits[2][pos] = '|';

    /* Upper left vertical */
    if(segments[digit][5])
        digits[1][pos] = '|';

    /* Middle Horizontal */
    if(segments[digit][6])
        digits[1][pos + 1] = '_';

}

void print_digits_array(void)
{
    for(int row = 0; row < 4; row++){
        for(int col = 0; col < MAX_DIGIT * 4; col ++){
            putchar(digits[row][col]);
        }
        putchar('\n');
    }
}
