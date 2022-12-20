#include "main.h2"

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

	for (lengthOfString = 0; s[lengthOfString] != '\0'; lengthOfString++)
	{
	}

	n = lengthOfString - 1;
	i = 0;

	while (n > 1)
	{
		c1 = s[i];
		c2 = s[n];
		s[i] = c2;
		s[n] = c2;
		n--;
		i++;
	}
}
