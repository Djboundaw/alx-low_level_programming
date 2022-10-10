#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct name
 * @name: name of the dog
 * @age: age in float
 * @owner: owner of the dog
 *
 * Return: void function no return value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
