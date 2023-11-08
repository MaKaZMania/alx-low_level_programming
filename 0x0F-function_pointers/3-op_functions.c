#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Calculates the sum of two integers
  * @a: First integer to be used
  * @b: Second integer to be used
  *
  * Return: Sum of a & b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Calculates the difference of two integers
  * @a: First integer to be used
  * @b: Second integer to be used
  *
  * Return: Difference of a & b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplies two integers
  * @a: First integer to be used
  * @b: Second integer to be used
  *
  * Return: The product of a & b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Divides first integer by the second integer
  * @a: First integer to be used
  * @b: Second integer to be used
  *
  * Return: Result of the division of a by b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Calculates the remainder of the division of first integer by second integer
  * @a: First integer to be used
  * @b: Second integer to be used
  *
  * Return: Remainder of a divided by b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
