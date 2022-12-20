#include <stdio.h>
#include "main.h"
/**
 * rev_string - This function prints a string in reverse order
 * @s: pointer parameter
 */
void rev_string(char *s)
{
	int length, index;
	int half;
	int temp;

for (length = 0; s[i] != '\0'; length++)
;
half = length / 2;
i = 0;
while (half--)
{
temp = s[length - i - 1]
s[length - i - 1] = s[i];
s[i] = temp
i++;
}
}
