#include "dog.h"

/**
 * init_dog - initalize dog struct
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
