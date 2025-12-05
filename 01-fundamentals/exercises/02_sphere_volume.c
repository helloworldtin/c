// Write a program that computes the volume of a sphere with a 10-meter radius, using the for-
// mula v = 4/3pi^2. Write the fraction 4/3 as 4. 0f /3. 0f. (Try writing it as 4/3. What hap
// pens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself
// twice to computer.

#include <stdio.h>
#define PI 3.14159
#define SPHERE_FAC (4.0f/3.0f)

int main(void){
  float radius = 10;
  float volume = SPHERE_FAC * PI * (radius * radius * radius);
  printf("The volume of the sphere is %.2f\n",volume);
  return 0;
}