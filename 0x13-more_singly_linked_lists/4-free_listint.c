#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * code by ArchibaldTK
 * @head: pointer to the first node of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	/*iterate through each node in list*/
	while ((current = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(current);
	}
}
