#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list.
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int nod;
	listint_t *temp;


	if (!head || !*head)
		return (0);

	nod = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (nod);
}
