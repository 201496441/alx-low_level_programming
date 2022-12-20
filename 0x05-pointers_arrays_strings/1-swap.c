#include <stdio.h>
#include "main.h"
void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
