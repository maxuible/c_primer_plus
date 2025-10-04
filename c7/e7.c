/*
    Write a program that requests the hours worked in a week and then prints the
    gross pay, the taxes, and the net pay. Assume the following:
    a. Basic pay rate = $10.00/hr
    b. Overtime (in excess of 40 hours) = time and a half
    c. Tax rate: #15% of the first 300
       20% of the next $150
       25% of the rest

    Use #define constants, and don't worry if the example does not conform to
    current tax law.
*/

#include <stdio.h>

#define DOLLARS_PER_HOUR 40
#define DOLLARS_PER_HOUR_OVERTIME 60

int main(void)
{

    double input = 0;
    double pay_gross = 0;
    double pay_net = 0;
    double pay_tax = 0;

    printf("How many hours did you work this week? : ");
    fflush(stdout);
    scanf("%lf", &input);

    if (input <= 40) {
        pay_gross = input * DOLLARS_PER_HOUR;
    } else {
        pay_gross = 40 * DOLLARS_PER_HOUR;
        pay_gross += (input - 40) * DOLLARS_PER_HOUR_OVERTIME;
    }

    if (pay_gross <= 300) {
        pay_tax = pay_gross * 0.15;
    } else if (pay_gross <= 450) {
        pay_tax = 300 * .15;
        pay_tax += (pay_gross - 300) * .20;
    } else {
        pay_tax = (300 * .15);
        pay_tax += (150 * .20);
        pay_tax += (pay_gross - 450) * .25;
    }

    pay_net = pay_gross - pay_tax;

    printf("Gross Pay : %.2lf\n", pay_gross);
    printf("Taxes     : %.2lf\n", pay_tax);
    printf("Net Pay   : %.2lf\n", pay_net);


    return 0;
}