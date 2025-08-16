/*
    Write a program that requests a type double number and prints the value of
    the number cubed. Use a function of your own design to cube the value and
    print it. The main() program should pass the entered value to this
    function.
*/

#include <stdio.h>

double cube(double input)
{
    return input * input * input;
}

int main(void)
{
    double input, input_cubed;

    printf("Enter a double to be cubed\n");
    scanf("%le", &input);

    input_cubed = cube(input);

    printf("%.2f cubed = %.2f\n", input, input_cubed);

    return 0;
}
