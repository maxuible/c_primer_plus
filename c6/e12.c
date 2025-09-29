/*
    Consider these two infinite series
    1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
    1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...

    Write a program that evaluates running totals of these two series up to some
    limit of number of terms. Hint: -1 times itself an odd number of times is
    -1, and -1 times itself an even number of times is 1. Have the user enter
    the limit interactively; let a zero or negative value terminate input.
    Look at the running totals after 100 terms, 1000 terms, 10,000 terms.
    Does either series appear to be converging to some value?
*/

#include <stdio.h>

int main(void)
{
    int upper = 0;
    printf("Enter an upper bounds:\n");
    fflush(stdout);
    scanf("%d", &upper);



    for (; upper > 0;) {
        double one_series_sum = 0.0;
        double two_series_sum = 0.0;
        for (int i = 0; i < upper; i++) {
            double divisor = i + 1;

            one_series_sum += 1.0f/divisor;

            if (i % 2 == 0) {
                two_series_sum += 1.0f/divisor;
            } else {
                two_series_sum -= 1.0f/divisor;
            }

        }
        printf("Series One Sum: %f\n", one_series_sum);
        printf("Series Two Sum: %f\n", two_series_sum);
        printf("Enter an upper bounds:\n");
        scanf("%d", &upper);
    }


    
    return 0;
}