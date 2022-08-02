#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints struct dog value
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);
	if (d->name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Owner: %s", d->owner);
	}
}
