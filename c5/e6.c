/*
    Now modify the program of Programming Excersize 5 so that it computes the
    sum of the squares of the integers. (if you prefer, how much money you
    receive if you get $1 the first day, $4 the second day, $9 the third day,
    and so on. This looks like a much better deal!) C doesn't have a squaring
    function but you can use the fact the square of n is n * n
*/

#include <stdio.h>

int main(void)
{
    int count, sum, distance;
    count    = 0;
    sum      = 0;
    distance = 0;

    printf("Which integer should the sum be calculated to?\n");
    scanf("%d", &distance);

    while(count++ < distance)
        sum = sum + (count * count);

    printf("sum = %d\n", sum);

    return 0;
}
