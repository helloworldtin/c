/*Write a program that asks the user to enter the amount of tax_amountable income, then displays the tax due.*/

int main(void){
  float income_amount;

  printf("Enter your income: ");
  scanf("%f",&income_amount);

  float tax_amount = -1;
  if(income_amount >= 1 && income_amount < 750){
    tax_amount = (1.0f/100.0f) * income_amount;
  }else if(income_amount >= 750 && income_amount < 2550){
    tax_amount = 7.50 + (2.0f/100.0f) * income_amount;
  }else if(income_amount >= 2550 && income_amount < 3750){
    tax_amount = 37.50 + (3.0f/100.0f) * income_amount;
  }else if(income_amount >= 3750 && income_amount < 5250){
    tax_amount = 82.50 + (4.0f/100.0f) * income_amount;
  }else if(income_amount >= 5250 && income_amount < 7000){
    tax_amount = 142.50 + (5.0f/100.0f) * income_amount;
  }else if(income_amount >= 7000){
    tax_amount = 230 + (6.0f/100.0f) * income_amount;
  }
  if(tax_amount == -1){
    printf("Invalid tax amount\n");
  }else{
    printf("The income tax amount is %2.f",tax_amount);
  }
  return 0;
}
