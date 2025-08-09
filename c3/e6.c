/*
    The mass of a single molecule of water is about 3.0x10^-23 grams. A quart
    of water is about 950 grams. Write a program that requests an amount of
    water, in quarts, and tdisplays the number of water molecules in that
    amount.
*/

#include <stdio.h>


int main(void)
{
    double quarts, grams, molecules;
    printf("enter an amount of quarts of water:\n");
    scanf("%lf", &quarts);

    grams = quarts * 950.0;

    molecules = grams * 3.0e+23;

    printf("there are %f molecules in %f quarts\n", molecules, quarts);

    return 0;
}
