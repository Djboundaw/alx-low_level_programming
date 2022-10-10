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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
