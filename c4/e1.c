/*
    Write a program that asks for your first name, your last name,
    and then prints the names in the format last, first.

*/


#include <stdio.h>

int main(void)
{
    char name_first[30];
    char name_last[30];

    printf("Enter your first name:\n");
    scanf("%s", name_first);

    printf("Enter your last name:\n");
    scanf("%s", name_last);

    printf("%s, %s\n", name_last, name_first);

    return 0;
}
