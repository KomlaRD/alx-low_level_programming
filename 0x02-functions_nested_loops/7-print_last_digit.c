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
	n = n % 10;

	_putchar(n);

	_putchar('\n');

	return (0);
}
