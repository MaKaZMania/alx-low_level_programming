#include "main.h"
#include <stdio.h>

/**
 * main - Prints number of arguments passed into it
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	
	return (0);
}
