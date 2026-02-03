#include <stdio.h>

int main(void){
  int grade = 4;

  switch(grade){
    case 4:
      printf("Excellent\n");
      break;
    case 3:
      printf("Good\n");
      break;
    case 2:
      printf("Not bad not bad\n");
      break;
    default:
      printf("Invalid grade you need to work harder\n");
      break;
  }

  switch(grade){
    case 4:
    case 2:
    case 3:
      printf("You have been successful\n");
      break;
    default:
      printf("You need to do something else\n");
      break;
  }

  switch(grade){
    case 4: case 3: case 2:
      printf("You are good to go man\n");
      break;
    default:
      printf("Hello where are you now\n");
      break;
  }
  return 0;
}
