#include "main.h"

/**
 * print_rev - print string in reverse order
 *
 * @s: string input
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int lengthOfString = 0;

	for (i = lengthOfString - 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
