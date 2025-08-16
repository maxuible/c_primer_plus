/*
    Change the program addemup.c (listing 5.13), which found the sum of the
    first 20 integers. (If you prefer, you can think of addemup.c as a program
    that calculates how much money you get in 20 days if you recieve $1 the
    first day, $2 dollars the second day, $3 dollars the third day, and so on.)
    Modify the program so that you can tell it interactively how far the
    calculation should proceed. That is, replace the 20 with a variable that
    is read on.

    list 5.13 (paraphrased psudeo code)

    main()
    {
        count, sum

        while (count++ < 20)
            sum = sum + count;

        printf(sum)
    }

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
        sum = sum + count;

    printf("sum = %d\n", sum);

    return 0;
}
