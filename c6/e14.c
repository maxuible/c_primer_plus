/*
    Write a program that creates two eight-element arrays of doubles and uses a
    loop to let the user enter values for the eight elements of the first array.
    Have the program set the elemetns of the second array to the cumulative
    totals of the elements of the first array. For example, the fourth element
    of the second array should equal the sum of the first four elements of the
    first array, and the fifth element of the second array should equal the
    sum of the first five elemetns of the first array. (It's poossible to do
    this with nested loops, but by using the fact that the fifth element of
    the second array equals the fourth element of the second arnd array plus
    the fifth element of the first array, you can avoid nesting and just a
    single loop for this task.) Finally, use loops to display the contents
    of the two arrays, with the first array displayed on one line and with
    each element of the second array displayed below the corresponding
    element of the first array.
*/

#include <stdio.h>


int main(void)
{
    double input[8] = {0};
    double output[8] = {0};

    printf("Enter 8 doubles:\n");
    fflush(stdout);

    for (int i = 0; i < 8; i++) {
        scanf("%lf", &input[i]);
    }
    output[0] = input[0];
    for (int i = 1; i < 8; i++) {
        output[i] = output[i - 1] + input[i];
    }
    
    for (int i = 0; i < 8; i++) {
        printf("%5.1f ", input[i]);
    }
    printf("\n");

    for (size_t i = 0; i < 8; i++) {
        printf("%5.1f ", output[i]);
    }

    return 0;
}