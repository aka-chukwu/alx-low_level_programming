#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number and prints whether it is positive or
 * negative. The number generated is different every time the program is
 * executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(NULL)); // Seed the random number generator with current time
    n = rand() % 201 - 100; // Generate a random number between -100 and 100

    // Print whether the number is positive or negative
    if (n >= 0)
        printf("%d is a positive number\n", n);
    else
        printf("%d is a negative number\n", n);

    return (0);
}

