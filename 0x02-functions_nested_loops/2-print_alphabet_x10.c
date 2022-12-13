#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
char a = 'a';
int b;
for (b = 0; b <= 10; b++)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
}
_putchar('\n');
}
