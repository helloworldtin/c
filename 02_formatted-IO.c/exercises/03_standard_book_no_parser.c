//Books are identified by an International Standard Book Number (ISBN). ISBNs assigned
// after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3.
// (Older ISBNs use 10 digits.) The first group (the GS/ prefix) is currently either 978ог 979.
// The group identifier specifies the language or country of origin (for example, 0 and 1 are
// used in English-speaking countries). The publisher code identifies the publisher (393 is the
// code for W. W. Norton). The item number is assigned by the publisher to identify a specific
// book (97950 is the code for this book). An ISBN ends with a check digit that's used to verify
// the accuracy of the preceding digits. Write a program that breaks down an ISBN entered by the users.

/*
 Enter ISBN: 978-0-393-97950-3
 GS1 prefix: 989
 Group identifier: 0
 publisher code : 393
 Item number: 97950
 Check digit: 3
*/

#include <stdio.h>

int main(void){
  int gs1_prefix;
  int group_identifier;
  int publisher_code;
  int item_number;
  int check_digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d",&gs1_prefix,&group_identifier,&publisher_code,&item_number,&check_digit);
  printf("GSI prefix: %.3d\n",gs1_prefix);
  printf("Group identifier: %.1d\n",group_identifier);
  printf("Publisher code: %.3d\n",publisher_code);
  printf("Item number: %.5d\n",item_number);
  printf("Check digit: %.1d\n",check_digit);
  return 0;
}