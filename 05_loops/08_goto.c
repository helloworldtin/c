#include <stdio.h>

int main(void){
  for(d = 2; d <= n; d++){
    if(n % d == 0) goto done;
  }
  // label for go to statement;
  done:
    if(d < n){
      printf("%d is divisible by %d\n",n,d);
    }else{
      printf("%d is the prime number\n",n);
    }

  
  while(1){
    int n;
    scanf("%d",&n);
    switch(n){
      case 0:
        goto while_loop_done;
          break;
      default:
          break;
      }
    }
  while_loop_done:
    printf("hello, world\n");
  return 0;
}