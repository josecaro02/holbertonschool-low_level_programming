#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *dest, char *src);

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
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char *));
	if (new_dog->name == NULL)
		return (NULL);
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->owner = malloc(sizeof(char *));
	if (new_dog->owner == NULL)
		return (NULL);
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}


/**
 *_strcpy - copies the string pointed to by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest.
 *@dest: char where the string will be copied
 *@src: char with the content to be copied
 *
 *Return: char with the addition of two strings
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;
	char *base;

	base = src;
	len = 0;
	while (*base != '\0')
	{
		base++;
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
