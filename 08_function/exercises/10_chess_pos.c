// Write the following function, which evaluates a chess position:
// int evaluate_position (char board [8] [8]) ;
// board represents a configuration of pieces on a chessboard, where the letters K, Q, R, B, N,
// P represent White pieces, and the letters k, q, r, b, n, and p represent Black pieces.
// e v a l u a t e p o s i t i o n should sum the values of the White pieces (Q = 9, R = 5, B = 3,
// N = 3, ₽ = 1). It should also sum the values of the Black pieces (done in a similar way). The
// function will return the difference between the two numbers. This value will be positive if
// White has an advantage in material and negative if Black has an advantage.


#include <stdio.h>
#include <stdbool.h>

#define N 8

int evaluate_position(char chess[N][N]);

int main(void)
{
    if(false == 0){
        printf("Fuck the world\n");
    }
    char chess_board[N][N] = {
        {'K', 'Q', 'K', 'R'},
        {' ', ' ', 'r', 'p'},
        {'P', 'p', 'P', 'p'},
    };

    int res = evaluate_position(chess_board);
    printf("The value is %d\n", res );

    return 0;
}

int evaluate_position(char chess[N][N]){
    int black_piece_sum = 0;
    int white_piece_sum = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){

            char ch = chess[i][j];

            switch (ch) {
                case 'Q':
                white_piece_sum += 9;
                break;

                case 'q':
                black_piece_sum += 9;
                break;

                case 'R':
                white_piece_sum += 5;
                break;

                case 'r':
                black_piece_sum += 5;
                break;

                case 'K':
                white_piece_sum += 3;
                break;

                case 'k':
                black_piece_sum += 3;
                break;

                case 'B':
                white_piece_sum += 3;
                break;

                case 'b':
                black_piece_sum += 3;
                break;

                case 'P':
                white_piece_sum += 1;
                break;

                case 'p':
                black_piece_sum += 1;
                break;
            }
        }
    }
    return white_piece_sum - black_piece_sum;
}
