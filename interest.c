//Program to calculate Simple and Compound Interest
#include <stdio.h>

int main() {
    int amount, time, rate;
    float simple_interest, compund_interest;
    // user inputs
    printf("Enter principal amount: ");
    scanf("%d", &amount);

    printf("Enter time: ");
    scanf("%d", &time);

    printf("Enter interest rate: ");
    scanf("%d", &rate);
    //calculations and outputs
    simple_interest = (amount*time*rate)/100;
    printf("Your simple interest is %.2f\n", simple_interest);
    return 0;
}