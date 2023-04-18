#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function that initializes a variable of type struct dog
 * @d: Parameter pointer to struct dog to initialize
 * @name: Parameter name to initialize
 * @age: Parameter age to initialize
 * @owner: Parameter owner to initialize
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
