#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 *
 * @a: array element to print
 * @n: length of array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}