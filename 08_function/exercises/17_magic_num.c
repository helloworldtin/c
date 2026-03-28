// Modify Programming Project 17 from Chapter 8 so that it includes the following functions:
// v o i d c r e a t e m a g i c square ( i n t n, char magic_ square(n] [n]) :
// void print_magic_square (int n , char magic_square [n] [n]) ;
// After obtaining the number n from the user, main will call create magic_square.
// passing it an n X n array that is declared inside main. create_magic_square will fill
// the array with the numbers 1, 2, ..., n as described in the original project. main will then
// call print_magic_square, which will display the array in the format described in the
// original project. Note: If your compiler doesn't support variable-length arrays, declare the
// array in main to be 99 x 99 instead of n x n and use the following prototypes instead:
// void c r e a t e magic_square ( i n t n, c h a r magic_ square [99] [99]) ;
// void print magic_square (int n , char magic_square 99] [991) ;

#include <stdio.h>
#include <stdlib.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter the size of magic square: ");
    int n;

    scanf("%d", &n);
    char magic_square[n][n];
    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);
    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    if(n % 2 == 0){
        printf("Invalid choice");
        exit(-1);
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            magic_square[i][j] = 0;
        }
    }

    magic_square[0][n/2] = 1;

    int prev_row = 0;
    int prev_col = n / 2;

    for(int i = 2; i <= n * n; i++){
        int prev_row_cpy = prev_row;
        int prev_col_cpy = prev_col;

        prev_row = prev_row - 1;
        prev_col = prev_col + 1;

        if(!(prev_row >= 0 && prev_row < n)){
            prev_row = n - 1;
        }
        if(!(prev_col >= 0 && prev_col < n)){
            prev_col = 0;
        }

        if(magic_square[prev_row][prev_col] != 0){
            prev_row = prev_row_cpy + 1;
            prev_col = prev_col_cpy;
        }
        magic_square[prev_row][prev_col] = i;
    }
}
void print_magic_square(int n, char magic_square[n][n])
{

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%8d ",magic_square[i][j]);
        }
        printf("\n");
    }
}
