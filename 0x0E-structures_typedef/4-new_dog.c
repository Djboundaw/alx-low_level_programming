#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: it's age
 * @owner: it's owner
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, own_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_len = strlen(name);
	new_dog->name = malloc(sizeof(char) * name_len + 1);
	if (new_dog->name == NULL)
	{
		free(d->name);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);
	new_dog->age = age;
	own_len = strlen(owner);
	new_dog->owner = malloc(sizeof(char) * own_len + 1);
	if (new_dog->owner == NULL)
	{
		free(d->owner);
		return (NULL);
	}
	new_dog->owner = strcpy(new_dog->owner, owner);
	return (new_dog);
}
