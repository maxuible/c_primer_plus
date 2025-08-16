/*
    Write a program that request the user to enter a Fahrenheit temperature.
    The program should read teh temperature as a type double number and pass
    it as an argument to a user-supplied function called Temperatures(). This
    function should calculate the Celsius equivalent and the Kelvin equivalent
    and display all three temperatures with a precision of two places to the
    right of the decimal. It should identifyh each value with the temperature
    scale it represents. Here is the formula for converting Fahrenheit to
    Celsius:

    Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0)

    The Kelvin scale, commonly used in science, is a scale in which 0
    represents absolute zero, the lower limit to possible temperatures. Here is
    the forumla for converting Celsius to Kelvin:

    Kelvin = Celsius + 273.16

    The Temperatures() function should use const to create symbolic 
    representations of the three constants that appear in the conversions. The
    main() fucntion should use a loop to allow the user to enter temperatures
    repeatedly, stopping when a q or other nonnumeric value is entered.
    Use the fact that scanf returns the number of items read, so it will return
    1 if it reads a number, but it won't return 1 if the user enters q. The ==
    operator tests for equality, so you can use it to compare the return value
    of scanf() with 1.

*/

#include <stdio.h>

void Temperatures(double fahrenheit)
{
    const double fahrenheit_to_celsius_divide = 5.0 / 9.0;
    const double fahrenheit_to_celsius_subtract = 32.0;

    const double celsius_to_kelvin_add = 273.16;

    double celsius, kelvin;

    celsius = fahrenheit_to_celsius_divide * (fahrenheit - fahrenheit_to_celsius_subtract);

    kelvin  = celsius + celsius_to_kelvin_add;

    printf("Fahrenheit : %f\n", fahrenheit);
    printf("Celsius    : %f\n", celsius);
    printf("Kelvin     : %f\n", kelvin);

    return;
}

int main(void)
{
    double fahrenheit;

    int input_success;

    printf("Enter a number in Fahrenheit to convert to Celsius and Kelvin: \n"
           "(Enter a non number to exit)\n");

    input_success = scanf("%le", &fahrenheit);


    while(input_success == 1) {
        Temperatures(fahrenheit);
        input_success = scanf("%le", &fahrenheit);
    }

    return 0;
}





