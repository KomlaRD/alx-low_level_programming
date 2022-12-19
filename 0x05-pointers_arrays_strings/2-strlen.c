#include "main.h"

/**
 * int_strlen - return the length of a string
 *
 * @s: string input
 *
 (* Description: Given a string input,
 * return the length of the string)
 *
 * return: length of string
 */
int _strlen(char *s)
{
	int i;
	int lengthOfString = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lengthOfString++;
	}

	return (lengthOfString);
}
