#include "dog.h"
#include <stdlib.h>

/**
 * inti_dog - initialises a dog struc
 * @d: dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: Null void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
