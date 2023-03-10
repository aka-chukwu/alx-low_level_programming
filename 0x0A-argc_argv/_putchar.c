#include <stdio.h>
#include "main.h"

/* main - writes a character c to the standard output 
 * @c: the character to be written 
 *
 * Return: on succes 1
 * on error -1, the errno is set approraitely
 */
int _putchar (char c)
{
	return(write(1, &c, 1));
}
