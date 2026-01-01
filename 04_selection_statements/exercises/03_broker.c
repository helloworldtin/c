#include <stdio.h>

int main(void){
  int share_count;
  float price_per_share;
  float commission; 

  printf("Enter the number of share: ");
  scanf("%d",share_count);

  printf("Enter the price per share: ");
  scanf("%f", &price_per_share);

  if(share_count < 20000){
    commission = 33.3 * share_count;
  }else{
    commission = 33.2 * share_count;
  }
  printf("You will be charged %.2f by the broker\n", commission);
  return 0;
}