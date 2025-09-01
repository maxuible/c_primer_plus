/*
    Modify excercise 8 so that it uses a function to return the value of the
    calculation.
*/

#include <stdio.h>

float difference_divided_by_product(float input_1, float input_2)
{
    return (input_1 - input_2) / (input_1 * input_2);
}

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
        printf("difference / product = %f\n",
                difference_divided_by_product(f1, f2));


        printf("Enter a floating point number: ");
        fflush(stdout);
        success1 = scanf("%f", &f1);
        printf("Enter a floating point number: ");
        fflush(stdout);
        success2 = scanf("%f", &f2);
    }
    printf("\nbye!\n");
    return 0;
}
