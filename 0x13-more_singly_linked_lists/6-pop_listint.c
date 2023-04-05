#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - fuunction deletes the head node
 * @head: pointer
 * Return: void
 */

int pop_listint(listint_t **head)
{
	int nd = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	*head = (*head)->next;
	free(temp);

	return (nd);
}
