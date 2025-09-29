/*
    Chuckie Lucky won a million dollars (after taxes), which he places in an
    account that earns 8% a year. On the last day of each year, Chuckie
    withdraws $100,000. Write a program that finds out hjow many years it takes
    for Chuckie to empty his account.
*/

#include <stdio.h>

int main(void)
{
    float luck_money = 1000000;
    int years = 0;
    for (; luck_money >= 0;) {
        luck_money += luck_money * .08;
        luck_money -= 100000;
        years++;
        printf("Lucky's Account year %2d: %10.2lf\n", years, luck_money);
    }

    return 0;
}