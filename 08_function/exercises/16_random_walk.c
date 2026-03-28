// Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
// v o i d generate_random w a l k ( c h a r walk [10] [10]) ;
// void print_array (char walk [101 [10]) ;
// main first calls generate_random walk, which initializes the array to contain ' .'
// characters and then replaces some of these characters by the letters A through Z, as
// described in the original project. main then calls print_array to display the array on
// t h e s c r e e n .

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void){

    char walk[10][10];
    generate_random_walk(walk);
    print_array(walk);
    return 0;
}

void generate_random_walk(char walk[10][10]){
    srand((unsigned)time(NULL));

    // add "." initially in matrix
    for(int row = 0; row < 10; row++){
       for(int col = 0; col < 10; col++) {
           walk[row][col] = '.';
       }
    }

    char letter = 'A';

    while(letter <= 'Z'){
        int row = rand() % 10;
        int col = rand() % 10;

        if(walk[row][col] == '.'){
            walk[row][col] = letter;
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

         if(!(col > 0 && row > 0 && col < 10 && row < 10)) break;
         walk[row][col] = letter;
         letter++;
    }

}
void print_array(char walk[10][10]){
    for(int row = 0; row < 10; row++){
       for(int col = 0; col < 10; col++) {
           printf("%c ", walk[row][col]);
       }
       printf("\n");
  }
}
