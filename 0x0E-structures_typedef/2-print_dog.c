#include <stdio.h>
#include "dog.h"
/**
	* print_dog - prints a struct dog
	* @d: pointer to struct type dog
	* Return: Nothing cause it's void
*/
void print_dog(struct dog *d)
{
if (d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->owner == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->owner);
	}
}
}
