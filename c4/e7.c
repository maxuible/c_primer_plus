/*
    Write a program that sets a type double variable to 1.0/3.0 and a type
    float variable to 1.0/3.0. Display each result three times - once showing
    four digits to the right of the decimal, once showing 12 digits to the
    right of the decimal, once showing 16 digits to the right of the decimal.
    Also have the program include float.h and display the values of FLT_DIG and
    DBL_DIG. Are the displayed values of 1.0/3.0 consistent with these values?
*/

#include <stdio.h>
#include <float.h>

int main(void)
{
    float  f_value;
    double d_value;

    f_value = 1.0/3.0;
    d_value = 1.0/3.0;

    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);
    printf("\n");

    printf("Float Values:\n");
    printf("%.4f\n",  f_value);
    printf("%.12f\n", f_value);
    printf("%.16f\n", f_value);
    printf("%.24f\n", f_value);

    printf("\n");

    printf("Double Values:\n");
    printf("%.4f\n",  d_value);
    printf("%.12f\n", d_value);
    printf("%.16f\n", d_value);
    printf("%.24f\n", d_value);
}
