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
int _name = 0;
int _owner = 0;
int k;
dog_t *_dog;

while (name[_name] != '\0')
{
_name++;
}
while (owner[_owner] != '\0')
{
_owner++;
}
_dog = malloc(sizeof(dog_t));
if (_dog == NULL)
{
free(_dog);
return (NULL);
}
_dog->name = malloc(_name *sizeof(_dog->name));
if (_dog->name == NULL)
{
free(_dog->name);
free(_dog);
return (NULL);
}
for (k = 0; k <= _name; k++)
{
_dog->name[k] = name[k];
}
_dog->age = age;
_dog->owner = malloc(_owner *sizeof(_dog->owner));
if (_dog->owner == NULL)
{
free(_dog->owner);
free(_dog->name);
free(_dog);
return (NULL);
}
for (k = 0; k <= _owner; k++)
{
_dog->owner[k] = owner[k];
}
return (_dog);
}
