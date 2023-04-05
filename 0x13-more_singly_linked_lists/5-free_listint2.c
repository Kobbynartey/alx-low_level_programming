#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: double pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *new;

	if (head == NULL)
		return;
	new = *head;

	while (new != NULL)
	{
		temp = new;
		new = new->next;
		free(temp);
	}
	*head = NULL;
}
