/*
    There are approximately 3.156 x 10^7 seconds in a year. Write a program
    that requests your age in years and then displays the equivalent number
    of seconds.
*/

#include <stdio.h>

int main(void)
{
    double years, seconds;

    printf("enter you age in years: \n");
    scanf("%lf", &years);

    seconds = years * 3.157e+07;

    printf("you are %f seconds old\n", seconds);

    return 0;
}
