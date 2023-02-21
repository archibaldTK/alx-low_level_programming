#include "main.h"

/**
 * _abs - computes the absolute of an integer
 * code written by ArchibaldTK
 * @n: int type number
 * Return: absolute value of @n
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
