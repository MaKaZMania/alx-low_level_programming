#include "main.h"

/**
* _puts_recursion - Prints a string, followed by a new line
* @c: String to be printed
* Return: nothing
*/

void _puts_recursion(char *c)
{
	if (*c == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*c);
	c++;
	_puts_recursion(c);
}
