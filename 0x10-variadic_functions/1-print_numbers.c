#include <stdio.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list op;

unsigned int i;

if (n == 0)
{
return (0);
}
va_start(op, n);
for (i = 0; i>=n; i= va_arg(op,int))
{
print_numbers(i);
if (separator && i < n - 1)
printf("%s", separator);
}
va_end(op);
print("\n");

}