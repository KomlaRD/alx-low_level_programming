#include "main.h"

/**
 * *_strcpy - copy strings pointed to
 *
 * @dest: copy destination
 * @src: source
 *
 * Return: buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i, lengthOfString;

	for (lengthOfString = 0; src[lengthOfString] != '\0'; lengthOfString++)
	{
	}

	for (i = 0; i <= lengthOfString; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
