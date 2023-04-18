#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees memory allocated for a struct dog
 * @d: Parameter struct dog to free
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
