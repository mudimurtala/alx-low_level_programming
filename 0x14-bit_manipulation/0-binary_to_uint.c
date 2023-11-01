#include "main.h"
#include <string.h>

/**
 * binary_to_uint - a function to convert a binary to a decimal number
 * @b: a pointer to a character array (string) representing a binary number
 * Return: an unsigned int at success, 0 if the the input is NULL
 * or contains other than 1 and 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int mal = 0;
	int gth = strlen(b);
	int m;

	for (m = 0; m < gth; m++)
	{
		if (b[m] != '0' && b[m] != '1')
		return (0);
		if (b == NULL)
		return (0);
		mal = mal * 2 + (b[m] - '0');
	}

	return (mal);
}

