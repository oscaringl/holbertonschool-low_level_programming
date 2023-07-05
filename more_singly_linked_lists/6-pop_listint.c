#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns the head node's data (n).
 * @head: Pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data = 0;

	if (head != NULL && *head != NULL)
	{
		current = *head;
		data = current->n;
		*head = (*head)->next;
		free(current);
	}

	return (data);
}
