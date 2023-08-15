#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nal, nol, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nal = 0; name[nal]; nal++)
		;
	nal++;
	dog->name = malloc(nal * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nal; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (nol = 0; owner[nol]; nol++)
		;
	nol++;
	dog->owner = malloc(nol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
