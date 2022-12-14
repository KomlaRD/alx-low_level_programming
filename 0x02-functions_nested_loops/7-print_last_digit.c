/**
 * print_last_digit- print last digit of a number
 *
(* Description: Given an integer n, print the last digit)
* @n: integer input
*
* Return: 0
*/

#include "main.h"

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = -n;
		i = n % 10;
	}
	else if (int i < 0)
	{
		i = -i;

	_putchar(n + '0');
	}

	return (n);
}
