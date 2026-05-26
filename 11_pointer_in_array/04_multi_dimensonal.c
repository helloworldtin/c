#include <stdio.h>

#define ROW_COUNT 3
#define  COL_COUNT 3

void print_matrix(int matrix[ROW_COUNT][COL_COUNT], int row_count, int col_count);
int *find_largest(int arr[], int n);
void print_largest_element_of_each_row(int matrix[ROW_COUNT][COL_COUNT], int row_count, int col_count);
void make_specific_row_zero(int matrix[ROW_COUNT][COL_COUNT], int row);
void make_specific_col_zero(int matrix[ROW_COUNT][COL_COUNT], int col);

int main(void)
{
    int matrix[ROW_COUNT][COL_COUNT];
    int *p;

    // make whole matrix zero.
    for(p = &matrix[0][0]; p <= &matrix[ROW_COUNT -1][COL_COUNT - 1]; p++ ){
        *p = 0;
    }

    int another_matrix[ROW_COUNT][COL_COUNT] = {
        {1,2,3},
        {5,5,4},
        {4,7,3},
    };
    // manipulating row using pointers in 2d array.
    //
    print_largest_element_of_each_row(another_matrix, ROW_COUNT, COL_COUNT);

    make_specific_col_zero(another_matrix, 0);
    print_matrix(another_matrix, COL_COUNT, ROW_COUNT);

    return 0;
}

void print_matrix(int matrix[ROW_COUNT][COL_COUNT], int row_count, int col_count)
{
    for(int i = 0; i < row_count; i++){
        for(int j = 0; j < col_count; j++){
            printf("%d",matrix[i][j]);
        }
        putchar('\n');
    }
}

int *find_largest(int arr[], int n)
{
    int *largest = arr;

    for(int i = 1; i < n; i++){
        if(*largest < arr[i]){
            *largest = arr[i];
        }
    }

    return largest;
}

void print_largest_element_of_each_row(int matrix[ROW_COUNT][COL_COUNT], int row_count, int col_count)
{
    int *p;
    for(int i = 0; i < row_count; i++){
        p = find_largest(&matrix[i][0], col_count);
        printf("The largest element in %d row is %d", i, *p);
        putchar('\n');
    }
}


void make_specific_row_zero(int matrix[ROW_COUNT][COL_COUNT], int row)
{
    int *p;

    for(p = matrix[row]; p < matrix[row] + COL_COUNT; p++){
        *p = 0;
    }
}

void make_specific_col_zero(int matrix[ROW_COUNT][COL_COUNT], int col)
{
    int (*p) [COL_COUNT];

    for(p = &matrix[0]; p < &matrix[ROW_COUNT]; p++){
        printf("The address of pointer is %p\n", p);
        (*p)[col] = 0;
    }

}
