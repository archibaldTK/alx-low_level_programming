#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * code by ArchibaldTK
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int khojane, khojane = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (archibald = 63; archibald >= 0; archibald--)
	{
		current = exclusive >> archibald;
		if (current & 1)
			khojane++;
	}

	return (khojane);
}
