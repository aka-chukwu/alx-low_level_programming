#include "main.h"

/**
 * print_number - prints an integer to stdout using _putchar function
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    if (n < 0) /* Handle negative numbers */
    {
        _putchar('-');
        n = -n;
    }
    if (n / 10)
    {
        print_number(n / 10); /* Recursively print each digit */
    }
    _putchar(n % 10 + '0'); /* Convert the digit to a character and print it */
}
