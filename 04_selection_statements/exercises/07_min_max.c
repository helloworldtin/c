/*
Write a program that finds the largest and smallest of four integers entered by the user:
*/

#include <stdio.h>

int main(void){
  int z1, z2, z3, z4;

  printf("Enter four integers: ");
  scanf("%d %d %d %d",&z1,&z2,&z3,&z4);
  
  int min,max,min1,min2,max1,max2;
  
  if(z1 > z2){
    max1 = z1;
    min1 = z2;
  }else {
    max1 = z2;
    min2 = z1;
  }
  
  if(z3 > z4){
    max2 = z3;
    min2 = z4;
  }else{
    max2 = z4;
    min2 = z3;
  }
  
  if(max1 > max2){
    max = max1;
  }else {
    max = max2;
  }
  
  if(min1 < min2){
    min = min1;
  }else {
    min = min2;
  }
  
  printf("Max is %d\n",max);
  printf("Min is %d\n",min);

  return 0;
}
