#include <stdio.h>
<<<<<<< HEAD
#include "main.h"
/**
 * array_iterator - Executes a function given as a
 *                  parameter on each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
=======
#include "function_pointers.h"
/**
 * array_iterator - calls a function to act on array elements
 * @array: Name of the array in which the function acts on.
 * @size: size of the passed array to function
 * @action: the function that acts on the array elements
 * Return: no return  
>>>>>>> 584f3f4e575109a0440f9e40be9ead56fbe1b7d5
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
<<<<<<< HEAD
	}
=======

>>>>>>> 584f3f4e575109a0440f9e40be9ead56fbe1b7d5
	for (i = 0; i < size; i++)
		action(array[i]);
<<<<<<< HEAD
	}
=======
>>>>>>> 584f3f4e575109a0440f9e40be9ead56fbe1b7d5
}
