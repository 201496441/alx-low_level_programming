#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator given by the user
 *
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

<<<<<<< HEAD
i = 0;
while (ops[i].op)
{
if (stpcpy(ops[i], s) == 0)
{
return (ops[i].op);
i++;
}
return (NULL);
=======
	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
>>>>>>> 584f3f4e575109a0440f9e40be9ead56fbe1b7d5
}
