#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * code by ArchibaldTK
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int w = 1;
	char *c = (char *) &w;

	return (*c);
}
