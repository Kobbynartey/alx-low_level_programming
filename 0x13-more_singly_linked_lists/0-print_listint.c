#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nd;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nd++;
	}
	return (nd);
}
