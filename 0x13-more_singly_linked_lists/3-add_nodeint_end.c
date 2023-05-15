#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of a listint_t list
 * code by ArchibaldTK
 * @head: head of node linked list
 * @n: value to put new node at end
 * Return: struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;

		return (new);
	}
}
