#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initializate the structure dog
 *
 *@d: name of the structure dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner of the dog
 *
 *Return: nothing, it's a void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
}

}
