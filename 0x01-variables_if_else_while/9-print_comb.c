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
for (int a = 0; a < 100; a++){
putchar(a + '0');
if (a < 99){
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
