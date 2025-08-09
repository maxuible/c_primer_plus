/*
    Find out what your system does with integer overflow, floating-point
    overflow, and floating-point underflow by using the experimental approach;
    that is, write programs having these problems. (You can check the
    discussion in Chapter 4 of limits.h and float.h to get guidance on the
    largest and smallest values.)
*/

#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{

    /*
    Integer overflow
    - find the size of int
    - set the value of an int to that
    - add one

    in my case its 4 bytes or 32 bits
    and 2 ** 32 power = 4294967296

    using the header limits.h there are defined already(more portable, not only
    for one system.)
    */

    unsigned int int_max, int_overflowed;

    int_max = UINT_MAX;
    int_overflowed = int_max + 1;

    printf("Integer Overflow:\n");
    printf("size of int: %zd\n", sizeof(int));
    printf("max int:     %u\n", int_max);
    printf("max int + 1: %u\n", int_overflowed);
    printf("----------\n\n");
    /*
    Floating-point overflow
    - there are def's in float.h that list the amount of significant bits in
      a float.
    */
    float float_max = FLT_MAX;
    float float_overflowed = float_max * 10; /* */
    printf("Floating-point overflow and underflow:\n");
    printf("number of bits in the mantissa of a float: %d\n", FLT_MANT_DIG);
    printf("number of significant bits in a float: %d\n\n", FLT_DIG);

    printf("max float:      %f\n", float_max);
    printf("max float * 10: %f\n", float_overflowed);

    float float_min = FLT_MIN;
    float float_underflow = float_min / 10.00;

    printf("min float:           %e\n", float_min);
    printf("min float / 10:      %e\n", float_underflow);
    printf("min float / 10 * 10: %e\n", float_underflow*10);


    return 0;
}
