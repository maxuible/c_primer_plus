/*
    Daphne invests $100 at 10% simple interest. (That is, every year, the
    investment earns an interest equal to 10% of the original investment.)
    Deirdre invests $100 at 5% interest compounded annually. (That is, interest
    is 5% of the current balance, including previous addition of interest.)
    Write a program that finds how many years it takes for the value of
    Deirdre's investment to exceed the value of Daphne's investment. Also show
    the two values at that time.
*/

#include <stdio.h>


int main(void)
{
    double daphne_money  = 100;
    double deirdre_money = 100;

    for (; deirdre_money <= daphne_money;) {
        daphne_money += 10;
        deirdre_money += deirdre_money * .05;
    }

    printf("Daphne  money: %5.4f\n", daphne_money);
    printf("Deirdre money: %5.4f\n", deirdre_money);

    return 0;
}