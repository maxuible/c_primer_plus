/*
    Have a program request the user to enter an uppercase letter.
    Use nested loops to procue a pyramid patter like this:

        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
*/

#include <stdio.h>

int main(void)
{
    char input;
    printf("enter an uppercase letter: ");
    fflush(stdout);
    scanf("%c", &input);

    for (int i = 0; i < 5; i++) {
        for (int j = 4 - i; j > 0; j--) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", input + j);
        }
        for (int j = i; j > 0; j--) {
            printf("%c", input + j - 1);
        }
        printf("\n");
    }

    return 0;
}
