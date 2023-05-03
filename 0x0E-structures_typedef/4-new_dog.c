#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i = 0; 
	unsigned int j = 0;
	unsigned int k = 0;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[j])
	{
		j++;
	}
	j++;
	dog->name = malloc(j * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	while (owner[k])
	{
		k++;
	}
	k++;
	dog->owner = malloc(k * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < k; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}
