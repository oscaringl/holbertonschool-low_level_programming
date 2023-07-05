#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table,
 *         or NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = NULL;

    /* Allocate memory for the hash table */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return NULL;

    /* Allocate memory for the array */
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return NULL;
    }

    /* Initialize the size and array members */
    ht->size = size;
    /* Set all array elements to NULL */
    for (unsigned long int i = 0; i < size; i++)
        ht->array[i] = NULL;

    return ht;
}
