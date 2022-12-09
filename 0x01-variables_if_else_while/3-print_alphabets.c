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
char B;
B='A';     
a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
while (B <= 'Z')
{
putchar(B);
a++;
}

putchar('\n');

return (0);
}

