/*
    Write a program that converts time in minutes to time in hours and minutes
    Use #define or const to create a symbolic constant for 60. Use a while
    loop to allow the user to enter values repeatedly and terminate the loop
    if a vaule for the time of 0 or less is entered.
*/


#include <stdio.h>

#define MINUTES_TO_HOURS 60

int main(void)
{
    int minutes, hours, left;
    minutes = 1;
    printf("This program converts minutes to hours and minutes\n");
    printf("Enter 0 to exit\n");
    printf("Enter the number of minutes: ");
    fflush(stdout);
    scanf("%d", &minutes);
    while (minutes > 0) {
        hours = minutes/MINUTES_TO_HOURS;
        left = minutes % MINUTES_TO_HOURS;
        printf("%d minutes is equal to \n", minutes);
        printf("%d hours and %d minutes\n", hours, left);

        printf("Next input?\n");
        scanf("%d", &minutes);
    }

    return 0;
}

