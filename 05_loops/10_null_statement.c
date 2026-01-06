#include <stdio.h>

int main(void) {
  // here are some example of null statement

  if(10 > 8); // this is null if statement
    // this is never going to execute although condtion is true.
    printf("hell, word\n");

  while(1);
    // this is also same as above.
  
  return 0;
}
