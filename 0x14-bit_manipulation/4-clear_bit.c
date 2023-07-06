#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * code by ArchibaldTK
 * @archie: pointer to the number to change
 * @archibald: andile of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *archie, unsigned int archibald)
{
	if (archibald > 63)
		return (-1);

	*archie = (~(1UL << archibald) & *archie);
	return (1);
}
