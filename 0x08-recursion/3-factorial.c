#include "main.h"

/**
* factorial - Calculate factorial of any number
* @n: The number to calculate the factorial of
* Return: Integer
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
