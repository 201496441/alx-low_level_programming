#include "main.h"
/**
<<<<<<< HEAD
* _strspn - return length of string that matches values consistently
=======
* _strspn - return length of string that matches values
>>>>>>> 0fbc6884e8bf3324874eea438d08efae3b7e8ae2
* @s: string to search
* @accept: target matches
* Return: number of bytes consecutively matched
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

while (s[i] != '\0')
{

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
matches++;
break;
}

if (accept[j + 1] == '\0' && s[i] != accept[j])
return (matches);
}
i++;
}
return (matches);

}
