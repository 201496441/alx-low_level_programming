#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int  j = 0, k = 0 ,i;
	char *str;
	const char option[] = "cifs";
	
	va_start(list,format);
	while (format && format[i])
	{
		j = 0;
		while (option[j])
		
		{
			if (format[i] == option[j] && k)
			{
				printf(", ");
				break;
			}
			j++
		}
		
		
		switch(format[i])
		{
			case 'c':
			printf("%c", va_arg(list, int));
			k = 1;
			break;
			case 'i':
			printf("%d", va_arg(list, int));
			k = 1;
			break;
			case 'f':
			printf("%f", va_arg(list, double));
			k = 1;
			break;
			case 's':
			str = va_arg(list,char*)
			k = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
			break;
		}
		i++
	}
	printf("\n");
	va_end(list);
}