/*
    Use nested loops to poruce the following pattern:

    F
    FE
    FED
    FEDC
    FEDCB
    FEDCBA
*/

#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 5; i++) {
        for (int j = 'F'; j >= 'F' - i; j--) {
            printf("%c", j);
        }
        printf("\n");
    }

}
