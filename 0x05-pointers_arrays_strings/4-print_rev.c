#include "main.h"
#include <stdio.h>
void print_rev(char *s)
{
int index = 0;
while (s[index] != '\0')
{
	index++;
}
int j = 0;
for (j = index -1; j >= index; j--)
{
_putchar(str[index]);
}
_putchar('\n');
}
