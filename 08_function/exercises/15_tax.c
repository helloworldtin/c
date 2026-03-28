//  Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the
// amount of income tax. When passed an amount of taxable income, the function will return
// the tax due.

#include<stdio.h>

float tax_cal(float income);

int main(){

    float income , tax;

    scanf("%f",&income);

    tax = tax_cal(income);
    printf("The tax is $%f: ",tax);

    return 0;
}

float tax_cal(float income_amount){

    float tax_amount;

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
    return tax_amount;
}
