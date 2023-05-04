#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: a pointer to the variable in use
 *
 * Return: on success 1, on error or disrupt 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0, i;

	if (b == NULL)
	{
		return 0;
	}

	while(b[len] != '\0')
	{
		len++;
	}
	len = len - 1;

	i = 0;
	while(b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (resul)t;
		}

		if (b[i] == '1')
		{
			result += 1*(1 << len)
			i++;
			len--;
		}
	return (result);
	}

}

  
