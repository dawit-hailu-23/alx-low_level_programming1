#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog struct
 * @d: struct of dog
 */
void free_dog(dog_t d)
{
	if (d != NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}