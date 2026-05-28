#include <stdio.h>
#define N 3

void make_matrix_identity(int n , double matrix[n][n]);
void make_matrix_identity_pointer(int n , double matrix[n][n]);
void print_matrix(int n , double matrix[n][n]);

int main(void){

    double ident[N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // make_matrix_identity(N, ident);
    make_matrix_identity_pointer(N,ident);
    print_matrix(N, ident);
    return 0;
}

void make_matrix_identity(int n, double matrix[n][n]){
    int row, col;
    for(row = 0; row < N; row++)
        for(col = 0; col < N; col++)
            if (row == col)
                matrix[row][col] = 1.0;
            else
                matrix[row][col] = 0.0;
}

void make_matrix_identity_pointer(int n , double matrix[n][n])
{
    double *ptr = matrix[0];
    int i = 0;

    *ptr = 1;
    for(ptr = matrix[0] + 1; ptr < matrix[0] + (n * n); ptr++){
        if(i == n){
            *ptr = 1;
            i = 0;
        }else{
            *ptr = 0;
            i++;
        }
    }
}

void print_matrix(int n , double matrix[n][n])
{
    int row, col;
    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            printf("%.1lf ", matrix[row][col]);
        }
        putchar('\n');
    }
}
