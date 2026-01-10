/* Add a loop to the b r o k e r. c program of Section 5.2 so that the user can enter more than
one trade and the program will calculate the commission on each. The program should ter-
minate when the user enters 0 as the trade value: */

#include <stdio.h>

int main(void){
  while(1){
    float commission , value;

    printf("Enter the value of trade:  ");
    scanf("%f", &value);

    if(value == 0 ) break;
    if(value < 2500.00f)
      commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
      commission = 56.00f + .0066f * value;
    else if(value < 20000.00f)
      commission = 100.00f + .0034f * value;
    else if(value < 50000.00f)
      commission = 100.00f + .0022f * value;
    else if(value < 500000.00f)
      commission = 155.00f + .0011f * value;
    else
      commission = 255.00f + .0009f * value;

    if(commission < 39.00f){
      commission = 39.00f;
    }
    printf("commission: %.2f\n",commission);
    }
  return 0;
}
