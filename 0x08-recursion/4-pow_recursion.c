#include "main.h"
/**
 * _pow_recursion - returns the value of @x raised to the power of @y
 * @x: number
 * @y: the power to raise @n to
 * Return: the value of @x to the @y power
 */
int _pow_recursion(int x, int y)
{
<<<<<<< HEAD
if (y < 0)
{
	return (-1);
}
if (y == 0)
{
	return (1);
}
return (x * (_pow_recursion(x, y + 1)));
}
=======
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
>>>>>>> 4b3e0fc2091d8bdc63af075f846cf5752c7334a5
