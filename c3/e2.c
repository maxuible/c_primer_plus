/*
    Write a program that asks you to enter an ASCII code value, such as 66,
    and then prints the character having that ASCII code.
*/


#include <stdio.h>


int main(void)
{
    int ch;
    printf("Enter a valid ASCII code value:\n");

    scanf("%d", &ch);

    printf("You entered the code:      %d\n", ch);
    printf("If converted to ASCII its: %c\n", ch);


    return 0;
}
