/*
    Write a program that reads a single word into a character array and then
    prints the word backwords.
*/


#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[30], input_length;

    printf("Enter a word: ");
    fflush(stdout);

    scanf("%s", input);

    input_length = strlen(input);

    for (int i = input_length; i >= 0; --i) {
        printf("%c", input[i]);
    }

    printf("\n");
    return 0;
}
