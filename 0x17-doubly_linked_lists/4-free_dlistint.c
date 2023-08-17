#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * code by ArchibaldTK
 * @head: head of linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
