#include <stdio.h>
#include "main.h"
/**
* _strlen - a function to print the length of a string
* @s: string to be supplied
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
	int index;
	while (s[index] != '/0')
	{
		index = index + 1;
	}
	return (index);
}
