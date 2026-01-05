#include <stdio.h>

int main(){
  int n,d;
  printf("Enter the number.I will tell whether it is prime or not:  ");
  scanf("%d",&n);

  for(d = 2; i < n; i++){
    if(n % d == 0) break;
  }

  if(d < n) 
    printf("%d is divisible by %d\n",n,d);
  else
    printf("%d is the prime number\n",n);
  return 0;
}
