#include "function_pointers.h"

/**
  * int_index - Searches for an integer
  * @array: Array containing functions as elements
  * @size: Size of the array
  * @cmp: Pointer to a function to be used
  *
  * Return: integer
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
