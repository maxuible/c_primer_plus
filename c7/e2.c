/*
    Write a program that reads input until encountering #. Have the program
    print each input character and its ASCII decimal code. Print eight
    character-code pairs per line. Suggestion: Use a character count and the
    modulus operator (%) to print a newline charcter for every eight cycles of
    the loop.
*/

#include <stdio.h>

int main(void)
{
    char ch = 0;
    int count = 0;
    while ((ch = getchar()) != '#') {
        if (ch == '\n')
            continue;
        
        printf("\"%c\"= <%3d> ", ch, ch);
        count++;
        if ((count % 8) == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}