#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list (safe version)
 * @h: Pointer to the head of the list
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h;
	size_t count = 0;
	int loop = 0;

	if (*h == NULL)
		return (0);

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop = 1;
			break;
		}
	}

	if (loop)
	{
		printf("Loop detected, unable to free list\n");
		exit(98);
	}

	while (*h != NULL)
	{
		count++;
		slow = *h;
		*h = (*h)->next;
		free(slow);
	}

	*h = NULL;

	return (count);
}
