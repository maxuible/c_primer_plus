/*
    Write a program that reads input up to # and reports the number of times
    that the sequence ei occurs.
*/

#include <stdio.h>

int main(void)
{

    int input = '#';
    int count = 0;

    while ((input = getchar()) != '#') {

        if (input == 'e') {
            input = getchar();
            if (input == '#') {
                printf("ei happened %d times", count);
                return 0;
            };
            if (input == 'i') {
                count += 1;
            }
        }
    }

    printf("ei happened %d times", count);

    return 0;
}
