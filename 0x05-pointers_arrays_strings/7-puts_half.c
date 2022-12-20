#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: given input of string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, lengthOfString, n;

	for (lengthOfString = 0; str[lengthOfString] != '\0'; lengthOfString++)
	{
	}

	n = (lengthOfString - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
