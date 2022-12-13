#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
char a = 'a';
for (int i = 0; i <= 10; i++)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
}
_putchar('\n');
}
