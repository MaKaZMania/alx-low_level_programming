#include "main.h"

/**
* _strlen_recursion - Calculates length of a string
* @c: String to be calculated
* Return: Integer
*/
int _strlen_recursion(char *c)
{
	if (*c == '\0')
	{
		return(0);
	}
	c++;
	return (_strlen_recursion(c) + 1);
}
