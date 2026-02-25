// Write a program that generates a "random walk" across a 10 x 10 array. The array will con-
// tain characters (all '. ' initially). The program must randomly "walk" from element to ele-
// ment, always going up, down, left, or right by one element. The elements visited by the
// program will be labeled with the letters A through Z, in the order visited. Here's an example
// of the desired output:
// A
// В с D
// F E
// H G
// Z
// Y
// K R S F U
// M P
// V
// W
// Hint: Use the s r a n d and r a n d functions (see d e a l . c ) to generate random numbers.
// After generating a number, look at its remainder when divided by 4. There are four possible
// values for the remainder—0, 1, 2, and 3—indicating the direction of the next move. Before
// performing a move, check that (a) it won't go outside the array, and (b) it doesn't take us to
// 1 8 0 Chapter 8 Arrays
// an element that already has a letter assigned. If either condition is violated, try moving in
// another direction. If all four directions are blocked, the program must terminate. Here's an
// example of premature termination:
// A B G H I .
// • C P . J K
// • D E . M L
// . . . . N
// W X Y P Q
// V U T S R
// 11.
// 12.
// 13.
// 14.
// 15.
// Y is blocked on all four sides, so there's no place to put Z.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void){
   char path[N][N];

   srand((unsigned)time(NULL));

   // add "." initally in matrix
   for(int row = 0; row < N; row++){
      for(int col = 0; col < N; col++) {
          path[row][col] = '.';
      }
   }

   char letter = 'A';

   while(letter <= 'Z'){
       int row = rand() % 10;
       int col = rand() % 10;

       if(path[row][col] == '.'){
           path[row][col] = letter;
           letter++;
           continue;
       }

       int direction = rand() % 4;

       // let 0 be top
       // 1 be right
       // 2 be bottom
       // 3 be left

       switch (direction) {
            case 0:
                row = row -1;
                break;
            case 1:
                col = col + 1;
                break;
            case 2:
                row = row + 1;
                break;
            default:
                col = col - 1;

        }

        if(!(col > 0 && row > 0 && col < N && row < N)) break;
        path[row][col] = letter;
        letter++;
   }

   for(int row = 0; row < N; row++){
      for(int col = 0; col < N; col++) {
          printf("%c ", path[row][col]);
      }
      printf("\n");
 }
}
