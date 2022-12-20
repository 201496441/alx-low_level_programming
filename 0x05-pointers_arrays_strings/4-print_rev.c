#include <stdio.h>
#include "main.h"
/**
 * print_rev - This function prints a string in reverse order
 * @s: pointer parameter
 */
void print_rev(char *s)
{

int index = 0;

while (s[index] != '\0')
{
	index++;
}
int j = 0;
for (j = index - 1; j >= index; j--)
{
_putchar(str[index]);
}
_putchar('\n');
}
