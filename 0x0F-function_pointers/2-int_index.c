#include "function_pointers.h"

/**
  * int_index - Searches for an integer
  * @array: array of elements
  * @size: number of elements in array
  * @cmp: pointer to the function used to compare values
  *
  * Return: Integer value
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
