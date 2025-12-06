#include <stdio.h>

// these are symbolic constants
// know as macros
// they are also preprocessing the value will put 
// in the name use in preprocessing.
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f) // we should give parenthesis for expression.

int main(void){
  float fahrenheit , celsius;

  printf("Enter fahrenheit temperature: ");
  scanf("%f",&fahrenheit);

  celsius = fahrenheit - FREEZING_PT * SCALE_FACTOR;

  printf("Celsius equivalent: %.1f\n",celsius);
  return 0;
}

// compiler options
//  g e c -0 -Wall -W-pedantic -ansi - s td=99 -0 pun pun.c