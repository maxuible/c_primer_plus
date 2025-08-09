/*
    Write a program that converts your age in years to days and displays both
    values. At this point, don't worry about fractional years and leap years.
*/

#include <stdio.h>


int main(void)
{
    int years, days;

    years = 25;
    days = years * 365;

    printf("Max is %d years old, this is %d days.\n", years, days);

    return 0;
}
