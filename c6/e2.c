/*
    Use nested loops to produce the following pattern
    $
    $$
    $$$
    $$$$
    $$$$$
*/

#include <stdio.h>

int main(void)
{
    for (int i = 5; i > 0; i--)
    {
        for(int j = i; j <= 5; j++)
            printf("$");
        printf("\n");
    }
}
