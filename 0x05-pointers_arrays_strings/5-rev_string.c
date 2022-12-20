#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, lengthOfString, n;
	char c1, c2;

	i = 0;
	lengthOfString = _strlen(s) - 1;

	while (lengthOfString > i)
	{
		swap_char(s + lengthOfString, s + i);
		i++;
		lengthOfString--;
	}
}

/**
 * _strlen - return length of string
 *
 * @s: string
 *
 * Return: length of a given input of string
 */
int _strlen(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	j++;
	return (j);
}

/**
 * swap_char - swap characters
 *
 * @c1: first character
 * @c2: second character
 *
 * Return: nothing
 */
void swap_char(char *c1, char *c2)
{
	char p = *a;
	*a = *b;
	*b = p;
}
