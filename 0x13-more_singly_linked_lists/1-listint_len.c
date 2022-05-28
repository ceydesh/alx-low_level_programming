#include "lists.h"

/**
 * listint_len - return the number ofelements in alinked list
 * @h: pointer to a listint_t type list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
