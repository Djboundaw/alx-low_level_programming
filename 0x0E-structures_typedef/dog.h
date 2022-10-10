#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type structure
 * @name: name of the dog
 * @age: it's age
 * @owner: it's owner
 *
 * Description: this struct defiunes a dog with some infos
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
