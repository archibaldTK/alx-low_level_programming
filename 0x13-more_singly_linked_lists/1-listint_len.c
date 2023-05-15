#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 * code by ArchibaldTK
 * @h: struct to go through
 * Return: amount of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
