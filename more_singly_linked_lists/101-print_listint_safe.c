#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list (safe version)
 * @head: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;
	int loop = 0;

	if (head == NULL)
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
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		exit(98);
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}

	return (count);
}
