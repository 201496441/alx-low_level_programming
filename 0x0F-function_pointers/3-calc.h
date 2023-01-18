<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H
=======
#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
>>>>>>> 584f3f4e575109a0440f9e40be9ead56fbe1b7d5

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
char *op;
int (*f)(int a, int b);
=======
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
