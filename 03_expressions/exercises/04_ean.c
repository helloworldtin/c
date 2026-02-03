/*
European countries use a 13-digit code, known as a European Article Number (EAN)
instead of the 12-digit Universal Product Code (UPC) found in North America. Each BAN
ends with a check digit, just as a UPC does. The technique for calculating the check digit is
also similar:
*/

#include <stdio.h>

int main(void){
  int first,second,third,fourth,fifth,sixth,sevent,eighth,ninth,tenth,eleventh,twelfth;

  printf("Enter the first 12 digits of an EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&first,&second,&third,&fourth,&fifth,&sixth,&sevent,&eighth,&ninth,&tenth,&eleventh,&twelfth);

  int firstSum = second + fourth + sixth + eighth + tenth + twelfth;
  int secondSum = first + third + fifth + sevent + ninth + eleventh;

  int total = (firstSum * 3) + secondSum;

  int ans = 9 - ((total - 1) % 10);

  printf("Check Digit: %d\n",ans);
  return 0;
}
