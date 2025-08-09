/*
    There are 2.54 centimeters to the inch. Write a program that asks you to
    enter your height in inches and then displays your height in centimeters.
    Or if you prefer ask for the height in centimeters and convert that to
    inches.
*/

#include <stdio.h>

int main(void)
{
    double inches, centimeters;

    printf("enter your height in inches: \n");
    scanf("%lf", &inches);

    centimeters = inches * 2.54;

    printf("you are %f centimeters tall\n", centimeters);

    return 0;
}

