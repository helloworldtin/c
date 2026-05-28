#include <stdio.h>
#include <stdbool.h>

#define N 8

int evaluate_position(char chess[N][N]);

int main(void)
{
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

    char *ptr;
    for(ptr = &chess[0][0]; ptr <= &chess[N-1][N-1]; ptr++){
        char ch = *ptr;
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

    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < N; j++){

    //         char ch = chess[i][j];

    //         switch (ch) {
    //             case 'Q':
    //             white_piece_sum += 9;
    //             break;

    //             case 'q':
    //             black_piece_sum += 9;
    //             break;

    //             case 'R':
    //             white_piece_sum += 5;
    //             break;

    //             case 'r':
    //             black_piece_sum += 5;
    //             break;

    //             case 'K':
    //             white_piece_sum += 3;
    //             break;

    //             case 'k':
    //             black_piece_sum += 3;
    //             break;

    //             case 'B':
    //             white_piece_sum += 3;
    //             break;

    //             case 'b':
    //             black_piece_sum += 3;
    //             break;

    //             case 'P':
    //             white_piece_sum += 1;
    //             break;

    //             case 'p':
    //             black_piece_sum += 1;
    //             break;
    //         }
    //     }
    // }
    return white_piece_sum - black_piece_sum;
}
