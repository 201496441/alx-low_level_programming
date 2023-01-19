#include <stdio.h>
#include <stdarg.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;
	char *str;
	
	
	va_start(op, n);
	
	for (i = 0; i < n; i++)
	{
		str = va_arg(op, char*);
		if (str)
		{
			printf("%s",str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	
	va_end(op);
}