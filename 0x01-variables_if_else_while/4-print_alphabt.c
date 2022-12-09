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
{char a;
char b;
a = 'a';
b = 'A';
while (a <= 'z')
{
	if(( a != 'q' && a != 'e' ) && a <= 'z' ){
		putchar(a);
		a++;
}
}
putchar('\n');
}
