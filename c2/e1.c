/*
    Write a program that uses one printf() call to print your first name and
    last name on oneline, uses a second printf() call to print your first and
    last names on two seperate lines, and uses a pair of printf() calls to
    print your first and last names on one line. The output should look like
    this (but using your name)

    Gustav Mahler <- First print statement
    Gustav        <- Second print statement
    Mahler        <- still the second print statement
    Gustav Mahler <- Third and fourth print statements
*/

#include <stdio.h>

int main(void)
{
    printf("Max Uible\n");
    printf("Max\nUible\n");
    printf("Max");
    printf(" Uible\n");

    return 0;
}
