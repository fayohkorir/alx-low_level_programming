#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array of integers
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the function used to compare values
 *
 * Return: the index of the first element for which cmp does not return 0,
 *         or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
