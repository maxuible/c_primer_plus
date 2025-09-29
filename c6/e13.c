/*
    Write a program that creates an eight-element array of ints and sets the
    elements to the first eight powers of 2 and then printes the values. Use a
    for loop to set the values, and, for variety, use a do while loop, to 
    to display the values.
*/

#include <stdio.h>

int main(void)
{
    int array[8] = {0};
    for (int i = 0; i < 8; i++) {
        array[i] = i * i;
    }

    int i = 0;
    do {
        printf("Array[%d] = %4d\n", i, array[i]);
        i++;
    } while (i < 8);


    return 0;
}