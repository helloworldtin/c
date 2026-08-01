#include <stdio.h>
#include <string.h>

int numchar(const char *s, char ch)
{
    int count = 0;
    s = strchar(s, ch);

    while(s != NULL) {
        count++;
        s = strchar(s + 1, ch);
    }
    
    return count;
}

// this is exercise 9

/*
  if(ch == 'a' || ch == 'b' || ch == 'c') {
      // do something
  }
  // change this to one single function call strchr
  if(strchr("abc", ch) != NULL);
 */

// this is exercise 10
/*
  if(strcmp(str, "foo") == 0 || strcmp(str, "bar") == 0 || strcmp(str, "baz") == 0))..
  strstr("foo#bar#baz" str);
 */

// this is exercise 11
/*
  memset(&s[strlen(s) - n], '!', n);
 */

int main(void)
{
    char *str = "hello world";
    char ch = 'l';

    int l_count = numchar(str, ch);
    printf("The number letter %c in %s is %d\n", ch, str, l_count);
    return 0;
}
