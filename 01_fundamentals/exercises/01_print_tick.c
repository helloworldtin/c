// Write a program that uses printf to display the following picture on the screen:
/*
    *.                 *
     *             * 
      *      * 
        * 
*/

#include <stdio.h>

int main(void){
  int n = 6;
  for(int i = 0; i<n; i++){
   for(int j = i; j>0; j--){
    printf(" ");
   }
   if(i>2){
   printf("*");
   }else{
    printf(" ");
   }
   for(int j = n - 2 - i ; j >= 0; j--){
    printf("  ");
   }
   if(i != n -1) 
    printf("*");

   printf("\n");
  }
  return 0;
}