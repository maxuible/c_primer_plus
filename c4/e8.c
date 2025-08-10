/*
    Write a program that asks the user to enter the number of miles traveled
    and the number of gallons of gasoline consumed. It should then calculate
    and display the miles-per value, showing one place to the right of the
    decimal. Next, using the fact that one gallon is about 3.785 liters and
    one mile is about 1.609 kilometers, it should conver the mile-per-gallon
    value to a liters-per-100-km value, the usual European way of expressing
    fuel consumption, and display the results, showing one place to the right
    of the decimal. Note that the U. S. scheme measures the distance traveled
    per amount of fuel (higher is better), whereas the European scheme measures
    the amount of fuel per distance (lower is better). Use symbolic constants
    (useing const or #define) for the two conversion factors.
*/

#include <stdio.h>

const double MILES_TO_KM = 1.609;
const double GALLONS_TO_LITERS = 3.786;

int main(void)
{
    double miles_traveled;
    double gallons_of_gas_consumed;

    printf("How many miles did you travel?\n");
    scanf("%lf", &miles_traveled);

    printf("How many gallons of gas did you consume?\n");
    scanf("%lf", &gallons_of_gas_consumed);

    printf("\nTraveling %.1f miles with %.1f gallons of gas is equal to "
           "%.1f miles-per-gallon\n", miles_traveled, gallons_of_gas_consumed,
           miles_traveled/gallons_of_gas_consumed);

    printf("\n\n");

    double liters_of_gas_consumed;
    double kilometers_traveled;

    liters_of_gas_consumed  = gallons_of_gas_consumed * GALLONS_TO_LITERS;
    kilometers_traveled     = miles_traveled * MILES_TO_KM;



    printf("%f gallons = %f liters\n", gallons_of_gas_consumed,
           liters_of_gas_consumed);
    printf("%f miles   = %f kilometers\n", miles_traveled, 
           kilometers_traveled);

    printf("\nTraveling %.1f kilometers with %.1f liters of gas is equal to "
           "%.1f liters per 100km\n", kilometers_traveled, liters_of_gas_consumed,
           liters_of_gas_consumed/kilometers_traveled * 100.0);

    return 0;
}
