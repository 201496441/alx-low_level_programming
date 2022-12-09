#include <stdlib.h>
#include <time.h>
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
int p;
p = 0;
while (p < 10)
{
putchar(p + '0');
p++;
}
putchar('\n');
return (0);
}
