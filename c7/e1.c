/*
    Write a program that reasds input until encountering the # character and
    then reports the number of spaces read, the number of newline characters
    read, and the number of all other characters read.
*/

#include <stdio.h>
#include <ctype.h>


int main(void)
{

    char ch      = '#';
    int  spaces   = 0;
    int  newlines = 0;
    int  others   = 0;

    for (; (ch = getchar()) != '#';) {

        if (ch == '\n')
            newlines++;
        else if (isspace(ch))
            spaces++;
        else
            others++;

    }
    printf("Spaces   read: %d\n", spaces);
    printf("Newlines read: %d\n", newlines);
    printf("Other    read: %d\n", others);

    return 0;
}