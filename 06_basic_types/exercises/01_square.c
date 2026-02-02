#include <stdio.h>

int main(void){
  int n;
  printf("Hello enter the number: ");
  scanf("%d",&n);

  // short ans = 1;
  long ans = 1;
  for(int i = 2; i <= n; i+=2){
        ans = i * i;
        printf("%ld\n",ans);
  }
  return 0;
}
