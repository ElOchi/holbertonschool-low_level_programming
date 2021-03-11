#include "function_pointers.h"

/**
 * array_iterator - executes a funct given as a param on each element of array
 * @array: array to execute funct on
 * @size: size of array
 * @action: pointer to the funct to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
