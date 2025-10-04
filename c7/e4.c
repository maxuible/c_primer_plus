/*
    Using if else statements, write a program that reads input up to #, replaces
    each period with an exclamation mark, replaces each exclamation mark
    initially present with two exclamation marks, and reports at the end the
    number substitutions it has made.
*/
#include <stdio.h>

int main(void)
{

    int ch = '#';

    while ((ch = getchar()) != '#') {
        if (ch == '\n')
            continue;

        if (ch == '.') {
            putchar('!');
        } else if (ch == '!') {
            putchar('!');
            putchar('!');
        } else {
            putchar(ch);
        }


    }

    return 0;

}
