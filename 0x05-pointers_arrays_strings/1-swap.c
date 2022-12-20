#include <stdio.h>
#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first value to be provided
 * @b: Second parameter to be provided
 * int change: addressed the swapped value will be sent to
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
