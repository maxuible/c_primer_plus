/*
    Write a program that reads in a line of input and then prints the line in
    reverse order. You can store the input in an array of char; assume that the
    line is no longer than 255 characters. Recall that you can use scanf() with
    the %c specifier to read a character at a time from input and that the
    newline character is generated when you press the Enter key.
*/

#include <stdio.h>

int main(void)
{
    char buffer[255] = {'\0'};
    char input = '\n';

    printf("Enter your input to reverse then hit enter:\n");
    fflush(stdout);
    scanf("%c", &input);

    int i = 0;
    for (; input != '\n';) {
        buffer[i] = input;
        scanf("%c", &input);
        i++;
    }

    printf("%s\n", buffer);

    for (int j = i; j >= 0; j--) {
        printf("%c", buffer[j]);
    }
    printf("\n");
    return 0;
}