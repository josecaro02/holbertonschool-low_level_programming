#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints dog structure
 *@d: pointer to the structure dog
 *
 *Return: Nothing, it's a void
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %p\n", d->name);
		printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
