/*
    Write a program that creates an array with 26 elements and stores the 26
    lowercase letters in it. Also have it show the array contents.
*/

#include <stdio.h>

#define LETTERS_SIZE 26

int main(void)
{
    char letters[LETTERS_SIZE] = { 0 };

    for (int index = 0; index < LETTERS_SIZE; index++) {
        letters[index] = 'a' + index;
    }

    printf("The resulting array: \n");
    for (int index = 0; index < LETTERS_SIZE; index++) {
        printf("index[%2d]: %c\n", index, letters[index]);
    }

    return 0;
}
