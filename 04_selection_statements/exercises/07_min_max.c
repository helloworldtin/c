/*
Write a program that finds the largest and smallest of four integers entered by the user:
*/


#include <stdio.h>

int main(void){
  int z1, z2, z3, z4;

  printf("Enter four integers: ");
  scanf("%d %d %d %d",&z1,&z2,&z3,&z4);

  int smallest;
  int largest;

  if(z1 > z2 && z1 > z3 && z1 > z4){
    largest = z1;
  }else if(z2 > z1 && z2 > z3 && z2 > z4){
    largest = z2;
  }else if(z3 > z1 && z3 > z2 && z3 > z4){
    largest = z3;
  }else if(z4 > z1 && z4 > 2 && z4 > z3){
    largest = z4;
  }else {
    largest = -1;
  }
  if(z1 < z2 && z1 < z3 && z1 < z4){
    smallest = z1;
  }else if(z2 < z1 && z2 < z3 && z2 < z4){
    smallest = z2;
  }else if(z3 < z1 && z3 < z2 && z3 < z4){
    smallest = z3;
  }else if(z4 < z1 && z4 < 2 && z4 < z3){
    smallest = z4;
  }else {
    smallest = -1;
  }

  if(largest != -1) printf("largest number is %d\n",largest);
  if(smallest != -1) printf("smallest number si %d\n",smallest);

  return 0;
}