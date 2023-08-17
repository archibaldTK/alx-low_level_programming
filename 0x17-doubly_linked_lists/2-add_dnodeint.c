#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of list
 * code by ArchibaldTK
 * @head: head of list to be modified
 * @n: data for the node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || head == NULL)
		return (NULL);
	new->n = n;

	if (*head == (NULL))
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (*head);
	}
	new->next = *head;
	*head = new;
	new->prev = NULL;
	(new->next)->prev = new;

	return (new);
}
