#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char a;
a = 'z';
while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');

return (0);
}
