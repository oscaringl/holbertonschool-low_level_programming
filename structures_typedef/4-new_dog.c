#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len, owner_len;

	/* Calculate the lengths of the name and owner strings */
	for (name_len = 0; name[name_len]; name_len++)
		;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;

	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner copies */
	name_copy = malloc(sizeof(char) * (name_len + 1));
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = malloc(sizeof(char) * (owner_len + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name and owner strings */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	/* Set the values of the new dog */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
