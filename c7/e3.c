/*
    Write a program that reads integers until 0 is entered. After input
    terminates, the program should report the total number of even integer
    (excluding the 0) entered, the average value of the even integers, the total
    number of odd integers entered, and the average value of the odd integers.
*/

#include <stdio.h>


int main(void)
{

    int input      = 0;
    //int count      = 0;
    int even_sum   = 0;
    int even_count = 0;
    int odd_count  = 0;

    for (; (scanf("%d", &input)) == 1;) {
        if (input == 0)
            break;

        //count++;
        if (input % 2 == 0) {
            even_sum += input;
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even Count: %d\n", even_count);
    printf("Odd Count:  %d\n", odd_count);
    printf("Average value of even ints: %d\n", even_sum/even_count);

    return 0;

}