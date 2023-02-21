#include "main.h"

/**
 * main - prints the sign of the number
 * code written by ArchibaldTK
 * @n:  is the int that will use for the argument of the function
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1 if +, 0 if 0, and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
