// Write a program that reads a 5 x 5 array of integers and then prints the row sums and the
// column sums:
// Enter row1 : 8 3 9 0 10
// Enter row2 : 3 5 1 7 1 1
// Enter row3 : 2 8 6 2 3 1
// Enter row4 : 1 5 7 3 2 9
// Enter row5 : 6 1 4 2 6 0
// Row totals : 30 2 7 4 0 36 2 8
// Column totals : 34 37 37 32 21

#include <stdio.h>

#define N 5

int main(void){

    int mat[N][N];

    for(int i = 0; i < N; i++){
        printf("Enter row%d: ",i+1);
        for(int j = 0; j < N; j++){
            scanf("%d",&mat[i][j]);
        }
    }

    // print the row total
    printf("\nRow totals: ");
    for(int i = 0; i < N; i++){
        long sum = 0;
        for(int j = 0; j < N; j++){
           sum += mat[i][j];
        }
        printf("%ld ",sum);
    }

    // print column total
    printf("\nColumn Totals: ");
    for(int i = 0; i < N; i++){
        long sum = 0;
        for(int j = 0; j < N; j++){
            sum += mat[j][i];
        }
        printf("%ld ",sum);
    }
    return 0;
}
