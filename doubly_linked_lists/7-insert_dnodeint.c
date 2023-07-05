#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Data for the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);

	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
		return (insert_at_beginning(h, new_node));

	return (insert_at_index(h, idx, new_node));
}

/**
 * create_new_node - Creates a new node with the given data.
 * @n: Data for the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *create_new_node(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_at_beginning - Inserts the new node at the beginning of the list.
 * @h: Pointer to a pointer to the head of the list.
 * @new_node: Pointer to the new node to be inserted.
 *
 * Return: Address of the new node.
 */
dlistint_t *insert_at_beginning(dlistint_t **h, dlistint_t *new_node)
{
	new_node->next = *h;
	if (*h != NULL)
		(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
}

/**
 * insert_at_index - Inserts the new node at the specified index in the list.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @new_node: Pointer to the new node to be inserted.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_at_index(dlistint_t **h, unsigned int idx, dlistint_t *new_node)
{
	dlistint_t *temp = *h;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == idx - 1)
			return (link_nodes(temp, new_node));
		temp = temp->next;
		i++;
	}

	free(new_node);
	return (NULL);
}

/**
 * link_nodes - Links the new node to the next node and the previous node.
 * @prev: Pointer to the previous node.
 * @new_node: Pointer to the new node to be inserted.
 *
 * Return: Address of the new node.
 */
dlistint_t *link_nodes(dlistint_t *prev, dlistint_t *new_node)
{
	new_node->next = prev->next;
	if (prev->next != NULL)
		prev->next->prev = new_node;
	prev->next = new_node;
	new_node->prev = prev;
	return (new_node);
}
