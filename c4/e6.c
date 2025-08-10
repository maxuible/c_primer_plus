/*
    Write a program that request the user's first name and then the user's 
    last name. Have it print the entered names on one line and the number of
    letters in each name on the following line. Align each letter count with
    the end of the corresponding name, as in the following.

    Melissa HoneyBee
          7        8

    Next, have it print the same information, but with the counts aligned with
    the beginning of each name.

    Melissa HoneyBee
    7       8
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name_first[30];
    char name_last[30];

    printf("What is your first name?\n");
    scanf("%s", name_first);

    printf("What is your last name?\n");
    scanf("%s", name_last);

    printf("%s %s\n", name_first, name_last);
    printf("%*d %*d\n", (int)strlen(name_first), (int)strlen(name_first),
           (int)strlen(name_last), (int)strlen(name_last));

    printf("%s %s\n", name_first, name_last);
    printf("%-*d %-*d\n", (int)strlen(name_first), (int)strlen(name_first),
           (int)strlen(name_last), (int)strlen(name_last));

    return 0;
}
