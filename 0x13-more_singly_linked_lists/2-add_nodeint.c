#include "lists.h"

/**
 * add_nodeint - adds anew node at the beginning of a list
 * @head: pointer to the first node of the list
 * @n: data to insert in that new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		p->n = n;
		p->next = *head;
		*head = p;
	}
	return (p);
}
