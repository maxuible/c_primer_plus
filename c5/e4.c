/*
    Write a program that asks the user to enter a height in centimeters and 
    then displays the height in centimeters and in feet and inches. Fractional
    centimeters and inches should be allowed, and the program should allow
    the user to contine entering heights until a nonpositive value is enetered.
    A sample run should look like this:

    Enter a height in centimeters: 182
    182.0 cm = 5 feet, 11.7 inches
    Enter a height in centimeters (<= 0 to quit): 168.7
    168.0 cm = 5 feet, 6.4 inches
    Enter a height in centimeters (<= 0 to quit): 0
    bye

*/

#include <stdio.h>

#define CENTIMETERS_IN_INCHES 2.54
#define INCHES_IN_FEET 12.0


int main(void)
{
    double centimeters, inches;
    int feet;

    printf("Enter a hieght in centimeters: ");
    fflush(stdout);
    scanf("%le", &centimeters);

    while (centimeters > 0) {
        inches = centimeters / CENTIMETERS_IN_INCHES;

        feet = (int)inches / (int)INCHES_IN_FEET;

        inches = inches - (feet * 12.0);
        printf("%f cm = %d feet, %.1f inches\n", centimeters, feet, inches);
        printf("Enter a height in centimeters (<= 0 to quit) : ");
        fflush(stdout);
        scanf("%le", &centimeters);
    }

    printf("bye\n");

    return 0;
}
