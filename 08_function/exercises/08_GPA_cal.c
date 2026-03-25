// Write the following function:
// fl o a t compute_GPA(char grades [ ] , i n t n) ;
// The grades array will contain letter grades (A, B, C, D, or F, either upper-case or lower-
// case); n is the length of the array. The function should return the average of the grades
// (assume that A = 4, B = 3, C = 2, D = 1, and F = 0).

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

float compute_GPA(char grades[], int n);

int main(void)
{
    float res = compute_GPA((char []){'a','b','c','d'}, 4);
    printf("The res is %f\n", res);

}

float compute_GPA(char grades[], int n)
{
    float gpaSum = 0;
    for(int i = 0; i < n; i++){
       int ch = tolower(grades[i]);
       switch (ch) {
            case 'a':
                gpaSum += 4;
                break;
            case 'b':
                gpaSum += 3;
                break;
            case 'c':
                gpaSum += 2;
                break;
            case 'd':
                gpaSum += 2;
                break;
            case 'f':
                gpaSum += 0;
                break;
            default:
                exit(1);
       }
    }

    return gpaSum / n;
}
