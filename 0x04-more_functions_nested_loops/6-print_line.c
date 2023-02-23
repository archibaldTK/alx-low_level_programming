#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the int for the parameters of the function
 * code by ArchibaldTK
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
