#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * code by ArchibaldTK
 * @n: integer to mess with
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1;

	x <<= ((sizeof(x) * 8) - 1);
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
		}
	while (x > 0)
	{
		if ((x & n) == 0)
			x = x >> 1;
		else
			break;
	}
	while (x > 0)
	{
		if ((x & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		x = x >> 1;
	}

}

