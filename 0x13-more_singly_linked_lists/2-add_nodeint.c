#include "lists.h"

/**
 * add_nodeint - fuction that adds a new node
 * @head: Pointer
 * @n: integer
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *(head);
	*head = newNode;

	return (newNode);
}
