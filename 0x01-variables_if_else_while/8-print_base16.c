#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
char la;
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (la = 'a'; la <= 'f'; la++)
putchar(la);
putchar('\n');
return (0);
}
