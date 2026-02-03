/* The square2. c program of Section 6.3 will fail (usually by printing strange answers) if
i * i exceeds the maximum i n t value. Run the program and determine the smallest value
of n that causes failure. Try changing the type of i to short and running the program
again. (Don't forget to update the conversion specifications in the call of p r i n t f ! ) Then
try long. From these experiments, what can you conclude about the number of bits used to
store integer types on your machine? */

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
