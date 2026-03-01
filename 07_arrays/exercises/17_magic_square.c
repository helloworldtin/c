// Write a program that prints an n X n magic square (a square arrangement of the numbers
// 1, 2, ..., n? in which the sums of the rows, columns, and diagonals are all the same). The
// user will specify the value of n:
// T h i s p r o g r a m c r e a t e s a m a g i c square of a s p e c i fi e d size.
// T h e s i z e m u s t b e a n o d d n u m b e r b e t w e e n 1 a n d 99.
// E n t e r s i z e o f m a g i c s q u a r e : 5
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

    int magic_mat[n][n];

    magic_mat[0][n/2] = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\n",magic_mat[i][j]);
        }
    }

    return 0;
}
