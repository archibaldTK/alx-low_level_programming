#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * code by ArchibaldTK
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, archie = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			archie++;
		}
		else if (archie)
			_putchar('0');
	}
	if (!archie)
		_putchar('0');
}
