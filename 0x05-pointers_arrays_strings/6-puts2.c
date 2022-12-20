#include "main.h"
#include <stdio.h>
void puts2(char *str)
{
	int i
	while (str[i] != '\0')
	{
	   if (i % 2==0)
	   {
		   _putchar(str[i]);
	   }
	   i++;
	}

}
