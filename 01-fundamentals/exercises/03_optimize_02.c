// Modify the program of Programming Project 2 so that it prompts the user to enter the radius
// of the sphere.

#include <stdio.h>
#define PI 3.14159
#define SPHERE_FAC (4.0f/3.0f)

int main(void){
  float radius;
  printf("Enter the value of radius: ");
  scanf("%f",&radius);
  if(radius < 0) {
    printf("Invalid radius\n");
    return -1;
  }
  float volume = SPHERE_FAC * PI * (radius * radius * radius);
  printf("The volume of the sphere is %.2f\n",volume);
  return 0;
}