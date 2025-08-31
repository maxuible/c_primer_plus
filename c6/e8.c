/*
    Write a program that request two floating-point numbers and prints the 
    value of their difference divided by their product. Have a program loop
    through pairs of input values until the user enters non numeric input.
*/

#include <stdio.h>

int main(void)
{
    float f1 = 0.0;
    float f2 = 0.0;
    int success1 = 0;
    int success2 = 0;

    printf("Enter a floating point number: ");
    fflush(stdout);
    success1 = scanf("%f", &f1);
    printf("Enter a floating point number: ");
    fflush(stdout);
    success2 = scanf("%f", &f2);

    while (success1 == 1 && success2 == 1) {
        printf("difference           = %f\n", f1 - f2);
        printf("product              = %f\n", f1 * f2);
        printf("difference / product = %f\n", (f1 - f2) / (f1 * f2));


        printf("Enter a floating point number: ");
        fflush(stdout);
        success1 = scanf("%f", &f1);
        printf("Enter a floating point number: ");
        fflush(stdout);
        success2 = scanf("%f", &f2);
    }
    printf("bye!\n");
    return 0;
}
