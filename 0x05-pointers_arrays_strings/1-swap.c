#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: first integer input
 * @b: second integer input
 *
 (* Description: Given two integers a and b,
 * swap the values of the integers)
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
