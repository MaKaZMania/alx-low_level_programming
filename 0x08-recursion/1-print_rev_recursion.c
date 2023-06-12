#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @c: String to be reversed
 * Return: Nothing
 */
void _print_rev_recursion(char *c)
{
	if (*c == '\0')
	{
		return;
	}
	c++;
	_print_rev_recursion(c);
	c--;
	_putchar(*c);
}
