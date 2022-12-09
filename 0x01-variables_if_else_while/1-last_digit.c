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
int n;
int i;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
i = n % 10;
if (i > 5)
printf("%d Last digit of %d is %d  and greater than 5\n", n, i);
if (i == 0)
printf("%d Last digit of %d is %d  is 0\n", n, i);
if(i < 6 && m != 0)
printf("%d and is less than 6 and not 0\n", n, i);

return (0);
}

