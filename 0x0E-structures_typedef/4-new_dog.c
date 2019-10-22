#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - creates a new struct dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner of the dog
 *
 *Return: struct of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	new_dog = malloc(sizeof(struct dog));
	if(new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
