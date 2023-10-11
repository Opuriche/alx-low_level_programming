#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int f, y, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (f = 0; name[f]; f++)
		;
	f++;
	dog->name = malloc(f * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < f; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (y = 0; owner[y]; y++)
		;
	y++;
	dog->owner = malloc(y * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < y; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
