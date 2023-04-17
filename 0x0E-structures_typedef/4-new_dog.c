#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: struct dog.
 * if fails, return NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int x, lname, lowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
	free(p_dog);
	return (NULL);
	}
	for (lname = 0; name[lname]; lname++)
	;
	for (lowner = 0; owner[lowner]; lowner++)
	;
	p_dog->name = malloc(lname + 1);
	p_dog->owner = malloc(lowner + 1);
	if (!(p_dog->name) || !(p_dog->owner))
	{
	free(p_dog->owner);
	free(p_dog->name);
	free(p_dog);
	return (NULL);
	}
	for (x = 0; x < lname; x++)
	p_dog->name[x] = name[x];
	p_dog->name[x] = '\0';
	p_dog->age = age;
	for (x = 0; x < lowner; x++)
	p_dog->owner[x] = owner[x];
	p_dog->owner[x] = '\0';
	return (p_dog);
}
