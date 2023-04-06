#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: pointer
 * @index: last node
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nd;

	nd = 0;
	while (nd < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
