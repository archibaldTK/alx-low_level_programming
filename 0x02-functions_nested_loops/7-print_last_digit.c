#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * code written by ArchibaldTK
 * @n: int type number
 * Return: return value of the last digit
*/

int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}
