#include "main.h"

/**
 * binary_to_uint  converts a binary number to an unsigned int
 * code by ArchibaldTK
 * @b: string to convert
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			y = (y << 1) | 1;
		else if (*b == '0')
			y <<= 1;
		else
			return (0);
		b++;
	}
	return (y);
}