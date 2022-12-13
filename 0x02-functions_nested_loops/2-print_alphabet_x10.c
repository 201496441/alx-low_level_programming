#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
char a = 'a';
while (a <= 'z')
{
int i;
for (i = 0; i <= 10; i++)
{
_putchar(a);
a++;
}
}
_putchar('\n');
}
