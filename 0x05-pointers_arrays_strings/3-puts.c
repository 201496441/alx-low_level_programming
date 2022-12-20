#include <stdio.h>
#include "main.h"
/**
* _puts - function that prints a string, followed by a new line, to stdout
* @str: pointer value
* Return: Always 0 (Success)
*/
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
