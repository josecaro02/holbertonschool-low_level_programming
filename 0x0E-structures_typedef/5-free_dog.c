#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - free structure dog
 *@d: pointer to the structure
 *
 *Return: Nothing, it's a void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
