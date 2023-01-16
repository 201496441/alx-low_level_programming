#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *_dog;

while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
	{
		free(_dog);
		return (NULL);
	}
	_dog->name = malloc(i * sizeof(_dog->name));
	if (_dog->name == NULL)
	{
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		_dog->name[k] = name[k];
	_dog->age = age;
	_dog->owner = malloc(j * sizeof(_dog->owner));
	if (_dog->owner == NULL)
	{
		free(_dog->owner);
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		_dog->owner[k] = owner[k];
	return (_dog);
}
