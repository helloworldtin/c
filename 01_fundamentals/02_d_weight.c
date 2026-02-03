#include <stdio.h>

int main(void){
  int height,length,width,volume,weight;

  printf("Enter the height of box: ");
  scanf("%d",&height);
  printf("Enter the length of box: ");
  scanf("%d",&length);
  printf("Enter the width of box: ");
  scanf("%d",&width);

  volume = height * length * width;

  weight = (volume + 165) / 166;

  printf("Volume (Cubic Inches): %d\n", volume);
  printf("Dimensional Wight is (pounds): %d\n",weight);
  return 0;
}
