#include <stdio.h>
#include <stdarg.h>

/**
	* sum_them_all - adds num
	* @n: param
	* Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	va_list op;
	
	unsigned int i;
	
	int sum;
	
	va_start(op ,n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(op, int);
	}
	va_end(op);
	return (sum);
}