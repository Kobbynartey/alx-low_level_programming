#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nd = 0;

	while (h != NULL)
	{
		h = h->next;
		nd++;
	}
	return (nd);
}
