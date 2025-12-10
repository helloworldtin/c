// write the program that formats product information enter by user . A session with program should look like this.

/*
 Enter the item number: 583
 Enter unit price: 13.5
 Enter purchase data (mm/dd/yyyy): 10/24/2010
*/

#include <stdio.h>

int main(void){
  int item_number;
  float unit_price;
  int month, day, year;

  printf("Enter the item number: ");
  scanf("%d",&item_number);

  printf("Enter the unit price: ");
  scanf("%f",&unit_price);

  printf("Enter the purchased date (mm/dd/yyyy): ");
  scanf("%d/%d/%d",&month,&day,&year);

  printf("Item \t Unit Price \t Purchase Date\n");
  printf("%-d \t $%6.2f \t %.2d/%.2d/%.4d\n",item_number,unit_price,month,day,year);
}