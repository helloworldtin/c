/* Modify the programming project 11 so that program contunues adding terms
 * until the current terms becomes less than e. where e is the smalles (floating)
 * point entered by the uses.
 */
#include <stdio.h>

 int main(void){
     float user_intput;
     float term_value = 1.0f;
     int term_count = 1;

     printf("Enter the smallest floating point number you want: ");
     scanf("%f",&user_intput);

     while(term_value >= user_intput){
         int fact = 1;
        for(int i = 2; i <= term_count;i++){
            fact *= i;
        }
        term_count ++;
        term_value  = 1.0f / fact;
     }
     printf("It goes up to %d\n", term_count);
     return 0;
 }
