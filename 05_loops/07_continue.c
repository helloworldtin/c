#include <stdio.h>

int main(void){
  int n  = 0;
  int sum = 0;
  int i;

  while(n < 10){
    scanf("%d",&i);
    if(i == 0){
      continue;
    }
    sum += i;
    n++;
  }

  printf("the sum is %d\n",sum);
  return 0;
}