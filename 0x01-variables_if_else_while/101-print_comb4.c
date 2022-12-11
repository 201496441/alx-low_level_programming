#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns a combination of number
 * Return: return 0 if successful
 */

int main(void)
{
int c;
int d;
int e = 0;
while (e < 10)
{
d = 0;
while (d < 10)
c = 0;
while (c < 10)
{
if (c != d && d != e && e < d && d < c)
{
putchar('o' + e);
putchar('o' + d);
putchar('o' + c);
if (c + d + e != 7 + 8 + 9)
{
putchar(',');
putchar(' ');
}
c++;
}
d++;
}
e++;
}
putchar('\n');
return (0);
}
