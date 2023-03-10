#include <stdio.h>

#include "main.h"

/*main - a program that prints its name 
 * @argc: arguement count 
 * @argv: array of arguement 
 *
 * Return: Always 0 succes 
 */
int main (int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	
	return (0);
}
