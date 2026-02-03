/* Write a program that finds largest in a series of numbers entered by the user
The program must promt the user to enter number on by one. When the user entere
0 or a negative number, the program must display the largest  nonnegative value:
 */
#include <stdio.h>

int main(void) {
  int largest_number = 0;

  while(1){
    int n;
    printf("Enter the number to find max: ");
    scanf("%d",&n);

    if(n <= 0) break;

    if(n > largest_number) largest_number = n;
  }
  printf("The largest number you had entered is %d\n",largest_number);

  return 0;
}
