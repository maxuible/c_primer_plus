/*
    Redo exercise 4 using a switch.
*/

#include <stdio.h>

int main(void)
{

    int input = '#';

    while ((input = getchar()) != '#') {

        if (input == '\n') continue;

        switch (input) {
            case '!': {
                putchar('!');\
            }
            case '.': {
                putchar('!');
                break;
            }
            default:
                putchar(input);
        }
    }

    return 0;
}
