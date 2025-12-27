#include <stdio.h>
// this is using the header file
#include <stdbool.h>
// way to make the boolean in the c89 std;
#define TRUE 1
#define FALSE 2

int main(void){
  // using built in macros for c99 and above.
  _Bool is_valid_age;
  bool is_hacker = false;
  if(is_hacker){
    printf("Hello, World\n");
  }
  
  return 0;
}