#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: the int for the parameters of the function
 * code by ArchibaldTK
 * Return: 0
 */

void print_line(int n)
{
	int i
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
			}
		_putchar('\n');
		}	
	else
	_putchar('\n');
}
