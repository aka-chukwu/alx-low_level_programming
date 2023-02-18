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

    srand(time(0)); // Seed the random number generator with current time
    n = rand() - RAND_MAX/2; // Generate a random number

    // Print whether the number is positive or negative
    if (n > 0)
        printf("%d is a positive number\n", n);
    else if (n < 0)
        printf("%d is a negative number\n", n);
    else
	printf("%d is zero\n", n)
    return (0);
}

