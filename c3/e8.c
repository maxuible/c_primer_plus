/*
    In the U.S. sytem of volume measurements, a pint is 2 cups, a cup is
    8 ounces, an ounce is 2 tablespoons, and a tablespoon is 3 teaspoons.
    Write a program that requests a volume in cups and that displays the
    equivalent volumes in pints, ounces, tablespoons, and teaspoons. Why does
    a floating-point style make more sense for this application than an integer
    type?

    ----------

    Floating-point is needed b/c the ratios can not be whole numbers

    pint       = 2 cups
    cup        = 8 ounces
    ounce      = 2 tablespoon
    tablespoon = 3 teaspoons
*/


#include <stdio.h>

int main(void)
{
    double cup, pint, ounce, tablespoon, teaspoon;

    printf("Enter cups: \n");
    scanf("%lf", &cup);

    pint       = cup / 2.0;

    ounce      = cup * 8.0;

    tablespoon = ounce * 2.0;

    teaspoon   = tablespoon * 3.0;

    printf("%f Cups =\n", cup);

    printf("%f pint(s)\n", pint);

    printf("%f ounce(s)\n", ounce);

    printf("%f tablespoon(s)\n", tablespoon);

    printf("%f teaspoons(s)\n", teaspoon);

    return 0;
}
