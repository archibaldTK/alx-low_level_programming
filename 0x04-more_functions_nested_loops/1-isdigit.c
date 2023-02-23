#include "main.h"
#include <stdio>

/**
 * _isdigit - checks for a digit (0 through 9)
 * code by ArchibaldTK
 * @c: the int for the parameters of my function
 * Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
