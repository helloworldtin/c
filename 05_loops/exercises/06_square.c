/* Write a program that prompts the user to enter a number n, then prints all even squares
between 1 and n. For example, if the user enters 100, the program should print the following.
*/

#include <stdio.h>

int main(void){
  int n;
  printf("Hello enter the number: ");
  scanf("%d",&n);

  for(int i = 2; i <= n; i+=2){
    printf("%d\n", i * i);
  }
  return 0;
}
