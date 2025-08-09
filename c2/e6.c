/*
    Write a program that creates an integer variable called toes. Have the
    program set toes to 10. Also have the program calulate what twice toes is
    and what toees squared is. The program should print all three values,
    identifying them.
*/

#include <stdio.h>

int main(void)
{
    int toes;
    toes = 10;

    printf("Toes         : %d\n", toes);
    printf("Toes Twice   : %d\n", toes * 2);
    printf("Toes Squared : %d\n", toes * toes);

    return 0;
}
