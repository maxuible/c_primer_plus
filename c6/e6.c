/*
    Write a program that prints a table with each line giving an integer, its
    square and its cube. Ask the user to input the lower and upper limits for
    the table. Use a for loop.
*/

#include <stdio.h>


int main(void)
{
    int start = 0;
    int end   = 0;


    printf("Enter a starting integer : ");
    fflush(stdout);
    scanf("%d", &start);

    printf("Enter an ending integer : ");
    fflush(stdout);
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        printf("%10d %10d %10d\n", i, i*i, i*i*i);
    }

    return 0;
}
