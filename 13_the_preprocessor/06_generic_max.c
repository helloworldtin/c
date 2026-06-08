#include <stdio.h>

typedef unsigned long ulong

#define GENERIC_MAX(type)        \
type type##_max(type x, type y)  \
{                                \
    return x > y ? x : y;        \
}

 GENERIC_MAX(long);
 GENERIC_MAX(ulong);

// GENERIC_MAX(unsigned long);
/***************************************************
 * a. The expansion of macro with type = long is
 * long long_max(long x, long y){
 *  return x > y ? x : y;
 * }
 *
 * b.unsigned long type is not support because of space in the data types
 **************************************************/

int main(void)
{
  long result = long_max(1,10);
  int result2 = ulong_max(10,10);
  printf("%u", result2);
  printf("%ld", result);
  return 0;
}
