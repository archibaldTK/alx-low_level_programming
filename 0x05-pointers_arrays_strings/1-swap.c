#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the paramters for the function
 * @b: the paramters for the function
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
