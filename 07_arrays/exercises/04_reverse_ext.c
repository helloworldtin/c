// Modify the reverse. C program of Section 8.1 to use the expression (int)
// (sizeof (a) / sizeof (a [0])) (or a macro with this value) for the array length.


#include <stdio.h>
#define SIZE ((int)(sizeof(a)/sizeof(a[0])))

int main(void){
    int i, n;

    printf("How many numbers do you wnat to reverse: ");
    scanf("%d", &n);

    int a[n];

   printf("Enter %d numbers: ",n);
   for(i = 0; i < SIZE; i++)
       scanf("%d",&a[i]);

   printf("In reverse order: ");
   for(i = SIZE - 1;  i >= 0; i--){
      printf(" %d",a[i]);
   }
   printf("\n");

    return 0;
}
