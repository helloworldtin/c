// Write a program that prints an n X n magic square (a square arrangement of the numbers
// 1, 2, ..., n? in which the sums of the rows, columns, and diagonals are all the same). The
// user will specify the value of n:
// This program creates a magic square of a specified size.
// The size must be an odd number between 1 and 99.
// Enter size of magic squ re : 5
// 1 7 2 4 1 8 15
// 2 3 5 7 14 1 6
// 4 6 1 3 2 0
// 1 0 1 9 21 3
// 1 1 25 2
//

#include <stdio.h>

int main(void){
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter the size of magic square: ");
    int n;

    scanf("%d", &n);

    if(n % 2 == 0){
        printf("Invalid choice");
        return -1;
    }

    int magic_mat[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            magic_mat[i][j] = 0;
        }
    }

    magic_mat[0][n/2] = 1;

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

        if(magic_mat[prev_row][prev_col] != 0){
            prev_row = prev_row_cpy + 1;
            prev_col = prev_col_cpy;
        }
        magic_mat[prev_row][prev_col] = i;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%8d ",magic_mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
