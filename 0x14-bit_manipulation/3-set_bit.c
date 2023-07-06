#include "main.h"

/**
 * set_bit - sets a bit at a given andile to 1
 * code by ArchibaldTK
 * @archie: pointer to the number to change
 * @archibald: andile of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *archie, unsigned int archibald)
{
	if (archibald > 63)
		return (-1);

	*archie = ((1UL << archibald) | *archie);
	return (1);
}
