#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog
 * @d: type dog_t
 *
 * Return: void function no return value
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
