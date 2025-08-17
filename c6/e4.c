/*
    Use nested loops to produce the following pattern:

    A
    BC
    DEF
    GHIJ
    KLMNO
    PQRSTU

*/

#include <stdio.h>

int main(void)
{
    char c = 'A';
    for (int i = 1; i < 7; i++) {
        for (int j = 0; j < i; j++){
            printf("%c", c);
            c++;
        }
        printf("\n");
    }

    return 0;
}
