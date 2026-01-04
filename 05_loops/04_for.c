#include <stdio.h>

int main(void){
  for(int i = 0; i<10; i++){
    printf("Hello, Word\n");
  }

  // omiting of expression
  int i = 10;

  for(; i > 0; i--){
    printf("The value of i is %d\n",i);
  }

  for(int i = 0; i < 10;){
    printf("Hello world,",i++);
  }


  int n = 10;
  for(int i = 0, j = 0; i < n; i++){
    printf("Hello world\n");
  }
  
  return 0;
}