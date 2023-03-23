#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index -  function that searches for an integer
  * code by ArchibaldTK
  * @array: pointer array
  * @size: size
  * @cmp: pointer to the function
  * Return: integer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);

				x++;
			}
		}
	}

	return (-1);
}
